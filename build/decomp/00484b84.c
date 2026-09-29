// OoT3D decomp @ 00484b84  name=FUN_00484b84  size=252

void FUN_00484b84(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  iVar4 = DAT_00484c88;
  uVar3 = DAT_00484c84;
  iVar2 = DAT_00484c80;
  if (2 < param_1) {
    param_1 = 2;
  }
  bVar5 = 0;
  iVar7 = DAT_00484c80 + 0x52;
  *(undefined1 *)(DAT_00484c80 + 0x22) = 0;
  bVar1 = *(byte *)(iVar7 + param_1);
  *(byte *)(iVar2 + 0x23) = bVar1;
  do {
    uVar8 = (uint)*(byte *)(iVar2 + 0x22);
    if (uVar8 != bVar1) {
      uVar9 = *DAT_00484c8c * DAT_00484c90 + (*DAT_00484c8c >> 1);
      *DAT_00484c8c = uVar9;
      cVar6 = *(char *)((uint)((ulonglong)uVar9 * (ulonglong)uVar3 >> 0x22) * -5 + uVar9 +
                       iVar2 + 0xf0);
      iVar7 = iVar4 + uVar8 * 8;
      if (*(char *)(iVar7 + 0x818) == cVar6) {
        cVar6 = *(char *)(uVar9 + 1 + (uint)((ulonglong)(uVar9 + 1) * (ulonglong)uVar3 >> 0x22) * -5
                         + iVar2 + 0xf0);
      }
      *(char *)(iVar7 + 0x820) = cVar6;
      *(undefined2 *)(DAT_00484c94 + iVar7) = 0x2d;
      *(undefined1 *)(iVar7 + 0x824) = 0x50;
      *(undefined1 *)(iVar7 + 0x825) = 0;
      *(undefined1 *)(iVar7 + 0x826) = 0;
      *(char *)(iVar2 + 0x22) = (char)(uVar8 + 1);
      iVar7 = iVar4 + (uVar8 + 1 & 0xff) * 8;
      *(undefined1 *)(iVar7 + 0x820) = 0xff;
      *(undefined2 *)(iVar7 + 0x822) = 0;
      *(undefined1 *)(iVar7 + 0x828) = 0xff;
      *(undefined2 *)(iVar7 + 0x82a) = 0;
    }
    bVar5 = bVar5 + 1;
  } while (bVar5 < 3);
  return;
}
