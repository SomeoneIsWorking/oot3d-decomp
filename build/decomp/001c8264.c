// OoT3D decomp @ 001c8264  name=FUN_001c8264  size=104

void FUN_001c8264(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  *(undefined2 *)(param_1 + 0x22c) = 300;
  *(short *)(param_1 + 0x22e) = *(short *)(param_1 + 0x92) + -0x8000;
  iVar1 = DAT_001c82cc;
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar1 < *(int *)(param_1 + 0x6c)) {
    iVar3 = DAT_001c82d0;
  }
  *(int *)(param_1 + 0x6c) = iVar3;
  uVar2 = DAT_001c82d4;
  *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) & 0xfe;
  FUN_003731e8(uVar2,param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x228) = DAT_001c82d8;
  return;
}
