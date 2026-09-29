// OoT3D decomp @ 002d052c  name=FUN_002d052c  size=284

float FUN_002d052c(undefined4 param_1,undefined4 param_2,short param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = (float)FUN_002cfca0();
  fVar2 = (float)FUN_00338f60(param_1);
  fVar3 = (float)FUN_002cfca0(param_2);
  fVar4 = (float)FUN_00338f60(param_2);
  fVar5 = (float)FUN_002cfca0();
  fVar6 = (float)FUN_00338f60((int)-param_3);
  fVar7 = fVar2 * fVar3;
  return -fVar1 * fVar3 * (fVar7 * fVar7 + (DAT_002d0648 - fVar7 * fVar7) * fVar6) +
         fVar2 * (fVar7 * fVar1 * (DAT_002d0648 - fVar6) - fVar2 * fVar4 * fVar5) +
         -fVar1 * fVar4 * (fVar2 * fVar4 * fVar7 * (DAT_002d0648 - fVar6) + fVar1 * fVar5);
}
