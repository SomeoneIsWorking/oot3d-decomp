// OoT3D decomp @ 00185fe4  name=FUN_00185fe4  size=148

void FUN_00185fe4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  uVar1 = DAT_0018607c;
  if ((*(ushort *)(param_1 + 0xc3c) & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xbac) = DAT_00186078;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
    FUN_00375c08(DAT_0018608c,DAT_00186088,DAT_00186084,DAT_00186080,param_1 + 0x1a4,7,2);
  }
  uVar2 = FUN_003769d8(param_2 + 0x28a0);
  bVar4 = uVar2 == 5;
  if (bVar4) {
    uVar2 = (uint)*(ushort *)(param_1 + 0xc3c);
  }
  if ((bVar4 && (uVar2 & 0x20) == 0) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 0x20;
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  return;
}
