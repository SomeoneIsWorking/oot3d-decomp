// OoT3D decomp @ 002c0198  name=FUN_002c0198  size=200

uint * FUN_002c0198(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  *(char *)((int)param_1 + 0xd) = (char)param_2;
  if (param_2 == 0) {
    puVar2 = (uint *)(uint)*(byte *)(DAT_002c0218 + 0x19);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x1;
      *(undefined1 *)((int)param_1 + 0x7f) = 1;
    }
  }
  else {
    if (param_2 == 1) {
      FUN_002bf48c(DAT_002c0214,*param_1 & 0xff);
      *(undefined1 *)(param_1 + 3) = 0;
      iVar1 = DAT_002c0214;
      uVar4 = *param_1;
      iVar3 = FUN_002e1ef0();
      if (iVar3 != 0) {
        puVar2 = *(uint **)(iVar1 + (*(ushort *)(DAT_004a0208 + iVar1) & 1) * 0x60 +
                            (uVar4 & 0xff) * 4 + 0x10b0);
        *puVar2 = *puVar2 | 0x20000000;
      }
      return (uint *)(uint)(iVar3 != 0);
    }
    puVar2 = param_1;
    if (param_2 == 2) {
      puVar2 = (uint *)FUN_002bf48c(DAT_002c0214,*param_1 & 0xff);
      return puVar2;
    }
  }
  return puVar2;
}
