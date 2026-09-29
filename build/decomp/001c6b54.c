// OoT3D decomp @ 001c6b54  name=FUN_001c6b54  size=216

void FUN_001c6b54(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_003731e0(param_1 + 0x208);
  iVar3 = FUN_003736fc(DAT_001c6c30,DAT_001c6c2c,param_1 + 0x208);
  sVar1 = 0;
  if (iVar3 != 0) {
    sVar1 = *(short *)(param_1 + 0x1aa);
  }
  if (iVar3 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x1aa) = sVar1 + -1;
  }
  if ((*(ushort *)(param_1 + 0x1aa) & 0x1000) == 0) {
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_001c6c34);
  }
  uVar2 = DAT_001c6c3c;
  if (*(short *)(param_1 + 0x1aa) == 0x1000) {
    if (0x1000000 < *(int *)(param_1 + 0x98) + 0xbd100000U) {
      FUN_00374a58(DAT_001c6c40,param_1 + 0x208,DAT_001c6c38[2]);
      FUN_00375bcc(param_1,DAT_001c6c44);
      *(undefined4 *)(param_1 + 0x1a4) = DAT_001c6c48;
      return;
    }
  }
  else if (*(short *)(param_1 + 0x1aa) != 0) {
    return;
  }
  FUN_00373d40(param_1 + 0x208,*DAT_001c6c38);
  *(undefined2 *)(param_1 + 0x1aa) = *(undefined2 *)(param_1 + 0x1ae);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}
