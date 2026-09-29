// OoT3D decomp @ 0022de3c  name=FUN_0022de3c  size=332

void FUN_0022de3c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  FUN_00372d4c(DAT_0022df90,DAT_0022df88,param_1 + 0xbc,DAT_0022df8c);
  FUN_00353dd0(param_2,param_1 + 0x1ac);
  FUN_00353d24(param_2,param_1 + 0x1ac,param_1,DAT_0022df94);
  bVar1 = FUN_00363c10(param_2 + 0x3a58,
                       (int)*(short *)(DAT_0022df98 + *(short *)(param_1 + 0x1c) * 2));
  *(byte *)(param_1 + 0x1a8) = bVar1;
  if ((bVar1 < 0x13) &&
     (param_2 = param_2 + (uint)bVar1 * 0x80, *(int *)(DAT_0022df9c + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_0022dfa0 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0022dfa0), iVar2 != 0)) {
    FUN_0036788c(DAT_0022dfa4);
  }
  piVar4 = *(int **)(DAT_0022dfa4 + 0x17c);
  piVar4[2] = *(int *)(param_1 + 0x178);
  if (*(ushort *)(param_1 + 0x1c) < 5) {
    uVar3 = ObjectBankArchive_00358ef8(param_2 + 0x10,1);
    uVar3 = (**(code **)(*piVar4 + 8))(piVar4,uVar3,1);
    *(undefined4 *)(param_1 + 0x204) = uVar3;
  }
  piVar4[2] = 0;
  if (*(char *)(param_1 + 0x1a8) < '\0') {
    FUN_00374428(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0022dfb0;
  }
  *(undefined1 *)(param_1 + 0x19a) = 1;
  return;
}
