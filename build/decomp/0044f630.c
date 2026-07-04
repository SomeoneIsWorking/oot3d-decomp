// OoT3D decomp @ 0044f630  name=FUN_0044f630  size=336

void FUN_0044f630(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [72];
  
  if (((*DAT_0044f780 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_0044f780), param_2 = (undefined4)((ulonglong)uVar7 >> 0x20),
     (int)uVar7 != 0)) {
    FUN_0036788c(DAT_0044f784);
    param_2 = DAT_0044f78c;
  }
  iVar5 = DAT_0044f794;
  *(undefined1 *)(param_1 + 0x104) = 0;
  iVar2 = DAT_0044f790;
  *(undefined2 *)(iVar5 + 0x52) = 0;
  FUN_003016e0(1,param_2);
  iVar5 = *(int *)(iVar2 + 0x3ec);
  if (*(int *)(iVar2 + 1000) == 8) {
    *(undefined1 *)(param_1 + 0x104) = 1;
    iVar4 = FUN_00468f7c(iVar2);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x104) = 0;
    }
  }
  if (*(char *)(param_1 + 0x104) == '\0') {
    FUN_00331754(1);
    if (iVar5 < 0) {
      FUN_0030166c(iVar2);
    }
    else {
      FUN_002eb05c();
      uVar3 = DAT_0044f798;
      FUN_00371738(auStack_68,DAT_0044f798,0x48);
      iVar5 = DAT_0044f79c;
      uVar1 = *(undefined2 *)(DAT_0044f79c + 0x4c);
      uVar6 = *(undefined4 *)(DAT_0044f79c + 0x15b4);
      FUN_00371738(DAT_0044f79c,DAT_0044f7a4,DAT_0044f7a0);
      FUN_00371738(uVar3,auStack_68,0x48);
      *(undefined2 *)(iVar5 + 0x4c) = uVar1;
      *(undefined4 *)(iVar5 + 0x15b4) = uVar6;
      FUN_002dece8(iVar2);
    }
    FUN_00468fbc(iVar2);
    FUN_00468e90(iVar2);
  }
  *(undefined4 *)(param_1 + 4) = DAT_0044f7a8;
  *(undefined4 *)(param_1 + 8) = DAT_0044f7ac;
  *(undefined1 *)(param_1 + 0x101) = 2;
  return;
}

