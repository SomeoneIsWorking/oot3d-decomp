// OoT3D decomp @ 003ae784  name=FUN_003ae784  size=200

void FUN_003ae784(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_0037378c(DAT_003ae84c,param_2,param_1 + 0x28,2,0xfa,0x14,1);
  iVar2 = (int)((ulonglong)((longlong)DAT_003ae850 * (longlong)*(int *)(param_2 + 0xf8)) >> 0x20);
  iVar2 = *(int *)(param_2 + 0xf8) + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -0x12;
  if (iVar2 == 0 || iVar2 == 9) {
    FUN_00375bcc(param_1,DAT_003ae854);
  }
  if ((int)*(float *)(param_1 + 0x6c) < DAT_003ae858) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_003ae85c;
  }
  FUN_00376864(param_1);
  if (*(short *)(param_1 + 0xc28) == 0x1e) {
    FUN_003725e0(param_2);
  }
  if (*(short *)(param_1 + 0xc28) == 0) {
    *(undefined2 *)(param_1 + 0xc28) = 8;
    uVar1 = DAT_003ae864;
    *(undefined4 *)(param_1 + 0xbac) = DAT_003ae860;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
  }
  return;
}
