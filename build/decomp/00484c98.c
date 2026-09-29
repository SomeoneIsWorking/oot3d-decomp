// OoT3D decomp @ 00484c98  name=FUN_00484c98  size=224

undefined4 FUN_00484c98(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;

  iVar6 = DAT_00484d8c;
  iVar3 = DAT_00484d88;
  uVar2 = DAT_00484d84;
  iVar1 = DAT_00484d78;
  uVar9 = (uint)*(byte *)(DAT_00484d78 + 0x22);
  if (uVar9 == *(byte *)(DAT_00484d78 + 0x23)) {
    return 1;
  }
  uVar8 = *DAT_00484d7c * DAT_00484d80 + (*DAT_00484d7c >> 1);
  *DAT_00484d7c = uVar8;
  iVar4 = DAT_00484d90;
  cVar7 = *(char *)((uint)((ulonglong)uVar8 * (ulonglong)uVar2 >> 0x22) * -5 + uVar8 + iVar3);
  iVar5 = iVar6 + uVar9 * 8;
  if (*(char *)(iVar5 + 0x818) == cVar7) {
    cVar7 = *(char *)(uVar8 + 1 + (uint)((ulonglong)(uVar8 + 1) * (ulonglong)uVar2 >> 0x22) * -5 +
                     iVar3);
  }
  *(char *)(iVar5 + 0x820) = cVar7;
  *(undefined2 *)(iVar4 + iVar5) = 0x2d;
  *(undefined1 *)(iVar5 + 0x824) = 0x50;
  *(undefined1 *)(iVar5 + 0x825) = 0;
  *(undefined1 *)(iVar5 + 0x826) = 0;
  *(char *)(iVar1 + 0x22) = (char)(uVar9 + 1);
  iVar6 = iVar6 + (uVar9 + 1 & 0xff) * 8;
  *(undefined1 *)(iVar6 + 0x820) = 0xff;
  *(undefined2 *)(iVar6 + 0x822) = 0;
  *(undefined1 *)(iVar6 + 0x828) = 0xff;
  *(undefined2 *)(iVar6 + 0x82a) = 0;
  return 0;
}
