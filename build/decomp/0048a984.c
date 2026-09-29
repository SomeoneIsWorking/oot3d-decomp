// OoT3D decomp @ 0048a984  name=FUN_0048a984  size=532

void FUN_0048a984(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_r1;
  int *piVar7;
  undefined4 uVar8;
  undefined8 uVar9;

  puVar2 = DAT_0048ab98;
  param_3 = param_3 & 0xff;
  software_interrupt(0x28);
  iVar4 = param_2;
  if ((*DAT_0048ab98 & 1) == 0) {
    uVar9 = FUN_003679b4(DAT_0048ab98);
    iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      FUN_0030c5b8(DAT_0048ab9c);
      iVar4 = DAT_0048aba4;
    }
  }
  cVar1 = *(char *)(DAT_0048ab9c + 1);
  if (cVar1 == '\x02') {
    uVar8 = 4;
  }
  else {
    uVar8 = 2;
  }
  if (((*puVar2 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0048ab98,iVar4), iVar4 != 0)) {
    FUN_0030c5b8(DAT_0048ab9c);
  }
  iVar5 = DAT_0048ab9c + param_3 * 0xc;
  piVar7 = *(int **)(iVar5 + 0x68);
  iVar4 = param_3 * 3;
  if ((*puVar2 & 1) == 0) {
    uVar9 = FUN_003679b4(DAT_0048ab98);
    iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      FUN_0030c5b8(DAT_0048ab9c);
      iVar4 = DAT_0048aba4;
    }
  }
  uVar3 = DAT_0048aba8;
  if (piVar7 != (int *)(iVar5 + 0x68)) {
    do {
      (**(code **)(piVar7[-1] + 0x10))(uVar3,piVar7 + -1,uVar8,param_1,param_2,2,cVar1);
      piVar7 = (int *)*piVar7;
      iVar4 = extraout_r1;
      if ((*puVar2 & 1) == 0) {
        uVar9 = FUN_003679b4(DAT_0048ab98);
        iVar4 = (int)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 != 0) {
          FUN_0030c5b8(DAT_0048ab9c);
          iVar4 = DAT_0048aba4;
        }
      }
    } while (piVar7 != (int *)(iVar5 + 0x68));
  }
  if ((*puVar2 & 1) == 0) {
    uVar9 = FUN_003679b4(DAT_0048ab98);
    iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      FUN_0030c5b8(DAT_0048ab9c);
      iVar4 = DAT_0048aba4;
    }
  }
  uVar6 = DAT_0048ab9c + param_3 * 8;
  software_interrupt(0x28);
  *(uint *)(uVar6 + 0x290) = uVar6 - param_1;
  *(uint *)(uVar6 + 0x294) = iVar4 - (param_2 + (uint)(uVar6 < param_1));
  return;
}
