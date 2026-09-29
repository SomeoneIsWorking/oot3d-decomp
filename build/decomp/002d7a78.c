// OoT3D decomp @ 002d7a78  name=FUN_002d7a78  size=400

int FUN_002d7a78(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;

  iVar8 = *(int *)(param_1 + 0x20ac);
  if (*(char *)(param_1 + 0x4c32) == '\x03') {
    iVar7 = 0;
  }
  else if (*(ushort *)(DAT_002d7c08 + iVar8) < 0x2e) {
LAB_002d7ae0:
    if ((*(uint *)(DAT_002d7c10 + iVar8) & 0x8000000) == 0) {
      return 0;
    }
    iVar7 = 2;
  }
  else {
    if (*(char *)(iVar8 + 0x1a7) == '\x01') {
      if ((*(ushort *)(iVar8 + 0x90) & 1) != 0) {
        iVar7 = 1;
        goto LAB_002d7af4;
      }
    }
    else if (*(ushort *)(DAT_002d7c08 + iVar8) < DAT_002d7c0c) goto LAB_002d7ae0;
    iVar7 = 3;
  }
LAB_002d7af4:
  pbVar9 = (byte *)(DAT_002d7c14 + iVar7 * 4);
  iVar3 = FUN_003695f8();
  iVar2 = DAT_002d7c24;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20ac);
    uVar5 = *(uint *)(iVar3 + 0x1710);
    bVar10 = (DAT_002d7c18 & uVar5) == 0;
    uVar6 = DAT_002d7c18;
    if (bVar10) {
      uVar6 = (uint)*(byte *)(iVar3 + 0x12bc);
    }
    if ((bVar10 && uVar6 == 0) && (*(char *)(DAT_002d7c1c + param_1) != '\x14')) {
      bVar10 = (uVar5 & 1) == 0;
      if (bVar10) {
        uVar5 = (uint)*(byte *)(iVar3 + 0x172a);
      }
      if ((bVar10 && (uVar5 & 0x80) == 0) &&
         ((((*(short *)(DAT_002d7c20 + 0x80) == 0 ||
            (iVar4 = *(char *)(iVar3 + 0x1ac) + -0x15, iVar4 < 0)) || (5 < iVar4)) || (iVar4 < 0))))
      {
        bVar1 = *(byte *)(iVar3 + 0x1749);
        bVar10 = bVar1 != 4;
        if (bVar10) {
          bVar1 = *pbVar9;
        }
        if ((bVar10 && bVar1 != 0) && ((bVar1 & *(byte *)(DAT_002d7c24 + 0x550)) == 0)) {
          if (iVar7 == 0) {
            if (*(char *)(iVar8 + 0x1a4) == '\x01') goto LAB_002d7c00;
          }
          else if (((iVar7 != 1 && iVar7 != 3) || (*(char *)(iVar8 + 0x1a7) != '\x01')) ||
                  (*(char *)(iVar8 + 0x1a4) == '\x02')) goto LAB_002d7c00;
          FUN_00367c7c(param_1,*(undefined2 *)(pbVar9 + 2),0);
          *(byte *)(iVar2 + 0x550) = *(byte *)(iVar2 + 0x550) | *pbVar9;
        }
      }
    }
  }
LAB_002d7c00:
  return iVar7 + 1;
}
