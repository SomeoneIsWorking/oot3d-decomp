// OoT3D decomp @ 002efd88  name=FUN_002efd88  size=252

void FUN_002efd88(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_002efe8c;
  FUN_002fcc88(DAT_002efe88,DAT_002efe84,*(undefined4 *)(DAT_002efe8c + 0x1c));
  iVar2 = (int)*(short *)(DAT_002efe90 + 0x48);
  if (iVar2 < (int)(uint)*(ushort *)
                          (DAT_002efe9c +
                           ((int)(*(uint *)(DAT_002efe90 + 0xb8) & *(uint *)(DAT_002efe94 + 0x10))
                           >> *(sbyte *)(DAT_002efe98 + 4)) * 2 + 0x20)) {
    FUN_002fcb04(*(undefined4 *)(iVar1 + 0x1c),iVar2,0);
  }
  else {
    FUN_002fcb04(*(undefined4 *)(iVar1 + 0x1c),iVar2,1);
  }
  FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),1,0x10f,7,0x2a,0x2a);
  FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),2,0x10f,0xbf,0x2a,0x2a);
  FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),3,0x114,0x3e,0x2a,0x2a);
  FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),4,0x103,0x68,0x2a,0x2a);
  return;
}
