int firstBadVersion(int n) {
    int left = 1, right = n;
    while (left < right) {  // ѭ��ֱ���������Ҷ˵���ͬ
        int mid = left + (right - left) / 2;  // ��ֹ����ʱ���
        if (isBadVersion(mid)) {
            right = mid;  // �������� [left, mid] ��
        } else {
            left = mid + 1;  // �������� [mid+1, right] ��
        }
    }
    // ��ʱ�� left == right��������Ϊһ���㣬��Ϊ��
    return left;
}
