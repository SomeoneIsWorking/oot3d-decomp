// OoT3D decomp @ 00311f50  name=FUN_00311f50  size=284

void FUN_00311f50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *in_r12;
  code *extraout_r12;

  puVar1 = DAT_00312074;
  uVar4 = DAT_00312070;
  puVar6 = *(undefined4 **)(DAT_0031206c + 0x9c);
  if (puVar6 != (undefined4 *)0x0) {
    if (puVar6[1] != 0) {
      in_r12 = (code *)DAT_00312074[1];
    }
    if (puVar6[1] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(0x10000,DAT_00312070,*puVar6);
      in_r12 = extraout_r12;
    }
    if (puVar6[6] != 0) {
      in_r12 = (code *)puVar1[1];
    }
    if (puVar6[6] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(0x10000,0x100,0);
    }
    uVar3 = 0;
    puVar6[2] = 0;
    puVar6[7] = 0;
    puVar6[3] = 0;
    puVar6[8] = 0;
    puVar6[4] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    if (param_1 != 0) {
      if ((code *)*puVar1 != (code *)0x0) {
        uVar3 = (*(code *)*puVar1)(0x10000,uVar4,*puVar6,param_1);
      }
      puVar6[1] = uVar3;
      puVar6[2] = param_1;
    }
    if (param_2 != 0) {
      if ((code *)*puVar1 == (code *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(code *)*puVar1)(0x10000,0x100,0,param_2 * 0x1c);
      }
      puVar6[6] = uVar4;
      FUN_00343280(uVar4,param_2 * 0x1c);
      puVar6[7] = param_2;
    }
    piVar2 = DAT_0031207c;
    iVar5 = puVar6[1];
    *DAT_00312078 = iVar5;
    *piVar2 = iVar5 + puVar6[2];
  }
  return;
}
