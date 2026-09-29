// OoT3D decomp @ 003d0ed4  name=FUN_003d0ed4  size=336

void FUN_003d0ed4(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;

  puVar1 = DAT_003d1024;
  *(undefined1 *)(param_1 + 0x3ed) = 0;
  iVar4 = param_2;
  if (((*puVar1 & 1) == 0) &&
     (uVar5 = FUN_003679b4(puVar1), iVar4 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0)) {
    FUN_0036788c(DAT_003d1028);
    iVar4 = DAT_003d1030;
  }
  uVar2 = DAT_003d1034;
  uVar5 = FUN_00315738(DAT_003d1034,iVar4);
  if ((int)uVar5 == 0) {
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    if (((*puVar1 & 1) == 0) &&
       (uVar5 = FUN_003679b4(DAT_003d1024), iVar4 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0
       )) {
      FUN_0036788c(DAT_003d1028);
      iVar4 = DAT_003d1030;
    }
    uVar5 = FUN_0031572c(uVar2,iVar4);
    if ((int)uVar5 == 0) {
      iVar4 = (int)((ulonglong)uVar5 >> 0x20);
      if (((*puVar1 & 1) == 0) &&
         (uVar5 = FUN_003679b4(DAT_003d1024), iVar4 = (int)((ulonglong)uVar5 >> 0x20),
         (int)uVar5 != 0)) {
        FUN_0036788c(DAT_003d1028);
        iVar4 = DAT_003d1030;
      }
      iVar4 = FUN_0040ff40(uVar2,iVar4);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x3ec) = 0;
        goto LAB_003d0fec;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 0x3ec) = uVar3;
LAB_003d0fec:
  if ((*(short *)(param_2 + 0x104) == 0x55) && (*(int *)(DAT_003d1038 + 8) == 0xfff7)) {
    *(undefined1 *)(param_1 + 0x3ec) = 0;
  }
  FUN_00370734(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x1bc) = DAT_003d103c;
  return;
}
