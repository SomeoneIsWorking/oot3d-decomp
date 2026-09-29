// OoT3D decomp @ 00489ab0  name=FUN_00489ab0  size=156

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00489ab0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint extraout_r1;
  uint uVar6;
  int unaff_r5;
  bool bVar7;

  iVar3 = DAT_00489b4c;
  if (*(char *)(DAT_00489b4c + 2) != '\0') {
    iVar4 = FUN_002c341c(DAT_00489b54,param_2,(int)((ulonglong)DAT_00489b50 * 1000),
                         (int)((ulonglong)DAT_00489b50 * 1000 >> 0x20));
    iVar5 = DAT_00489b54;
    if (iVar4 != 0) {
      iVar3 = FUN_002e1ef0();
      cVar1 = '\0';
      if (iVar3 != 0) {
        unaff_r5 = iVar5 + 0x1300;
        cVar1 = *(char *)(iVar5 + 0x1318);
      }
      if (iVar3 != 0 && cVar1 != '\0') {
        uVar2 = **(ushort **)(iVar5 + (~(uint)*(ushort *)(unaff_r5 + 0x1a) & 1) * 4 + 0x1098);
        bVar7 = uVar2 != 0;
        if (bVar7) {
          *(ushort *)(unaff_r5 + 0x1a) = uVar2 + 1;
          if (uVar2 == 0xffff) {
            *(undefined2 *)(unaff_r5 + 0x1a) = 2;
          }
          if (*(char *)(unaff_r5 + 0x19) != '\0') {
            uVar2 = *(ushort *)(unaff_r5 + 0x1a);
          }
          *(ushort *)(unaff_r5 + 0x1c) = uVar2 & 1;
        }
        if (bVar7) {
          uVar6 = 0;
          do {
            FUN_004a0590(DAT_002c3414,uVar6,
                         *(undefined4 *)
                          (iVar5 + (uint)*(ushort *)(unaff_r5 + 0x1c) * 0x60 + (uVar6 & 0xff) * 4 +
                          0x1170));
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 0x18);
          FUN_00497698(DAT_002c3414,
                       *(undefined4 *)(iVar5 + (uint)*(ushort *)(unaff_r5 + 0x1c) * 4 + 0x1310));
          iVar3 = *(int *)(iVar5 + 0x14);
          uVar6 = extraout_r1;
          if (iVar3 != 0) {
            uVar6 = (uint)*(byte *)(iVar3 + 0x10);
          }
          if (iVar3 != 0 && uVar6 != 0) {
            FUN_0049792c(iVar3,*(undefined4 *)
                                (iVar5 + (uint)*(ushort *)(unaff_r5 + 0x1c) * 4 + 0x1300),0xa0);
          }
          iVar3 = DAT_002c3418;
          iVar5 = FUN_004a010c(DAT_00497928);
          if (-1 < iVar5) {
            *(int *)(iVar3 + 0x2c) = iVar5 + *(int *)(iVar3 + 0x2c);
          }
          return;
        }
      }
      return;
    }
    *(undefined1 *)(iVar3 + 1) = 1;
  }
  if (*(char *)(iVar3 + 1) != '\0') {
    FUN_0030b304(DAT_00489b58);
    FUN_0031007c(DAT_00489b58);
  }
  if (*(char *)(iVar3 + 3) != '\0') {
    FUN_0030e604((int)((ulonglong)DAT_00489b5c * 1000),(int)((ulonglong)DAT_00489b5c * 1000 >> 0x20)
                );
    return;
  }
  FUN_002e1ba0(DAT_00489b54);
  FUN_002c330c(DAT_00489b54);
  return;
}
