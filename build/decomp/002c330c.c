// OoT3D decomp @ 002c330c  name=FUN_002c330c  size=300

void FUN_002c330c(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1;
  uint uVar5;
  int unaff_r5;
  bool bVar6;

  iVar3 = FUN_002e1ef0();
  cVar1 = '\0';
  if (iVar3 != 0) {
    unaff_r5 = param_1 + 0x1300;
    cVar1 = *(char *)(param_1 + 0x1318);
  }
  if (iVar3 != 0 && cVar1 != '\0') {
    uVar2 = **(ushort **)(param_1 + (~(uint)*(ushort *)(unaff_r5 + 0x1a) & 1) * 4 + 0x1098);
    bVar6 = uVar2 != 0;
    if (bVar6) {
      *(ushort *)(unaff_r5 + 0x1a) = uVar2 + 1;
      if (uVar2 == 0xffff) {
        *(undefined2 *)(unaff_r5 + 0x1a) = 2;
      }
      if (*(char *)(unaff_r5 + 0x19) != '\0') {
        uVar2 = *(ushort *)(unaff_r5 + 0x1a);
      }
      *(ushort *)(unaff_r5 + 0x1c) = uVar2 & 1;
    }
    if (bVar6) {
      uVar5 = 0;
      do {
        FUN_004a0590(DAT_002c3414,uVar5,
                     *(undefined4 *)
                      (param_1 + (uint)*(ushort *)(unaff_r5 + 0x1c) * 0x60 + (uVar5 & 0xff) * 4 +
                      0x1170));
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 0x18);
      FUN_00497698(DAT_002c3414,
                   *(undefined4 *)(param_1 + (uint)*(ushort *)(unaff_r5 + 0x1c) * 4 + 0x1310));
      iVar3 = *(int *)(param_1 + 0x14);
      uVar5 = extraout_r1;
      if (iVar3 != 0) {
        uVar5 = (uint)*(byte *)(iVar3 + 0x10);
      }
      if (iVar3 != 0 && uVar5 != 0) {
        FUN_0049792c(iVar3,*(undefined4 *)
                            (param_1 + (uint)*(ushort *)(unaff_r5 + 0x1c) * 4 + 0x1300),0xa0);
      }
      iVar3 = DAT_002c3418;
      iVar4 = FUN_004a010c(DAT_00497928);
      if (-1 < iVar4) {
        *(int *)(iVar3 + 0x2c) = iVar4 + *(int *)(iVar3 + 0x2c);
      }
      return;
    }
  }
  return;
}
