// OoT3D decomp @ 001c6d38  name=FUN_001c6d38  size=200

void FUN_001c6d38(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_003731e0(param_1 + 0x204);
  iVar2 = FUN_003736fc(DAT_001c6e04,DAT_001c6e00,param_1 + 0x204);
  sVar1 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1a8);
  }
  if (iVar2 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x1a8) = sVar1 + -1;
  }
  if ((*(ushort *)(param_1 + 0x1a8) & 0x1000) == 0) {
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_001c6e08);
  }
  if ((*(int *)(param_1 + 0x98) < DAT_001c6e0c) || (*(short *)(param_1 + 0x1a8) == 0x1000)) {
    FUN_00374a58(DAT_001c6e14,param_1 + 0x204,DAT_001c6e10[1]);
    FUN_00375bcc(param_1,DAT_001c6e18);
    uVar3 = DAT_001c6e1c;
  }
  else {
    if (*(short *)(param_1 + 0x1a8) != 0) {
      return;
    }
    FUN_00373d40(param_1 + 0x204,*DAT_001c6e10);
    uVar3 = DAT_001c6e20;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}
