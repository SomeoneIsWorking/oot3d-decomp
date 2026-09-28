// OoT3D decomp @ 0033d364  name=FUN_0033d364  size=408

void FUN_0033d364(float param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;

  iVar1 = iRam0033d4fc;
  *(undefined1 *)(iRam0033d4fc + 0x3f) = 1;
  *(float *)(iVar1 + 0xec) = param_1;
  if (*(char *)(iVar1 + 0x37) != '\0') {
    return;
  }
  uVar4 = func_0x00366684(0);
  iVar3 = iRam0033d508;
  iVar2 = iRam0033d504;
  iVar7 = param_2 + iRam0033d500;
  cVar6 = (char)(int)((param_1 - fRam0033d50c) * fRam0033d510 * fRam0033d514);
  if (uVar4 == param_2) {
    if (iVar7 == 0) {
      if (iRam0033d504 < (int)param_1) {
        cVar6 = '\x7f';
      }
      else if ((int)param_1 < iRam0033d508) {
        cVar6 = '\0';
      }
      func_0x003560d8(0,3,'\x7f' - cVar6);
      func_0x003560d8(0,0x2000,cVar6);
      if (*(char *)(iVar1 + 0x36) == '\0') {
        *(undefined1 *)(iVar1 + 0x36) = 1;
        goto LAB_0033d4e8;
      }
    }
  }
  else {
    iVar5 = func_0x0032e658();
    if ((iVar5 != 0) && (iVar7 == 0)) {
      uVar4 = func_0x00366684(3);
      bVar8 = param_2 <= uVar4;
      if (uVar4 != param_2) {
        bVar8 = 9 < *(byte *)(iVar1 + 0x36);
      }
      if (!bVar8) {
        func_0x0036ec40(3,uRam0033d518,0);
        func_0x00356018(3,0);
        func_0x00356058(3,uRam0033d51c,1,0);
        *(undefined1 *)(iVar1 + 0x36) = 10;
      }
      if (iVar2 < (int)param_1) {
        cVar6 = '\x7f';
      }
      else if ((int)param_1 < iVar3) {
        cVar6 = '\0';
      }
      func_0x003560d8(3,3,'\x7f' - cVar6);
    }
  }
  if (9 < *(byte *)(iVar1 + 0x36)) {
    return;
  }
LAB_0033d4e8:
  *(char *)(iVar1 + 0x36) = *(char *)(iVar1 + 0x36) + '\x01';
  return;
}
