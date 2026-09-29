// OoT3D decomp @ 002c016c  name=FUN_002c016c  size=44

uint * FUN_002c016c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;

  *(char *)(param_1 + 4) = (char)param_2;
  if (param_2 == 1) {
    FUN_00497c88(*(undefined4 *)(param_1 + 0x68));
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  puVar2 = *(uint **)(param_1 + 0x68);
  *(char *)((int)puVar2 + 0xd) = (char)param_2;
  if (param_2 == 0) {
    puVar3 = (uint *)(uint)*(byte *)(DAT_002c0218 + 0x19);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
      *(undefined1 *)((int)puVar2 + 0x7f) = 1;
    }
  }
  else {
    if (param_2 == 1) {
      FUN_002bf48c(DAT_002c0214,*puVar2 & 0xff,param_3,param_4,unaff_r4,unaff_lr);
      *(undefined1 *)(puVar2 + 3) = 0;
      iVar1 = DAT_002c0214;
      uVar5 = *puVar2;
      iVar4 = FUN_002e1ef0();
      if (iVar4 != 0) {
        puVar2 = *(uint **)(iVar1 + (*(ushort *)(DAT_004a0208 + iVar1) & 1) * 0x60 +
                            (uVar5 & 0xff) * 4 + 0x10b0);
        *puVar2 = *puVar2 | 0x20000000;
      }
      return (uint *)(uint)(iVar4 != 0);
    }
    puVar3 = puVar2;
    if (param_2 == 2) {
      puVar2 = (uint *)FUN_002bf48c(DAT_002c0214,*puVar2 & 0xff);
      return puVar2;
    }
  }
  return puVar3;
}
