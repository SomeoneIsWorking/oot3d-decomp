// OoT3D decomp @ 00487848  name=FUN_00487848  size=324

void FUN_00487848(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;

  piVar2 = DAT_00487990;
  puVar1 = DAT_0048798c;
  iVar4 = param_2;
  if ((*DAT_0048798c & 1) == 0) {
    uVar7 = FUN_003679b4(DAT_0048798c);
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      *piVar2 = (int)piVar2;
      piVar2[-1] = 0;
      iVar4 = DAT_00487998;
      piVar2[1] = (int)piVar2;
    }
  }
  piVar5 = (int *)DAT_0048799c[1];
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0048798c,iVar4), puVar3 = DAT_0048799c, iVar4 != 0)) {
    DAT_0048799c[1] = piVar2;
    *puVar3 = 0;
    puVar3[2] = piVar2;
  }
  if (piVar5 != DAT_00487990) {
    do {
      piVar6 = (int *)*piVar5;
      (**(code **)(piVar5[-1] + 8))(piVar5 + -1,param_2,param_2 + param_3);
      if (((*puVar1 & 1) == 0) &&
         (iVar4 = FUN_003679b4(DAT_0048798c), puVar3 = DAT_0048799c, iVar4 != 0)) {
        DAT_0048799c[1] = piVar2;
        *puVar3 = 0;
        puVar3[2] = piVar2;
      }
      piVar5 = piVar6;
    } while (piVar6 != DAT_00487990);
  }
  return;
}
