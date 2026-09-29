// OoT3D decomp @ 0015f6c8  name=FUN_0015f6c8  size=104

void FUN_0015f6c8(int param_1,int param_2)

{
  int iVar1;

  *(uint *)(*(int *)(DAT_0015f730 + param_2) + 0x1714) =
       *(uint *)(*(int *)(DAT_0015f730 + param_2) + 0x1714) | 0x800000;
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 == 2) {
    *(ushort *)(param_1 + 0x83c) = *(ushort *)(param_1 + 0x83c) & 0xfffd;
    FUN_003523dc(4);
    FUN_0037073c(param_2,0xd);
    *(undefined4 *)(param_1 + 0x840) = DAT_0015f734;
  }
  return;
}
