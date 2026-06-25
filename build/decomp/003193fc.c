// OoT3D decomp @ 003193fc  name=FUN_003193fc  size=340

int FUN_003193fc(undefined4 param_1,float param_2,float param_3,undefined4 param_4,
                undefined4 param_5_00,undefined4 param_6_00,undefined4 param_7_00,
                undefined4 *param_5,undefined4 *param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float extraout_s11;
  
  iVar2 = FUN_00354698(param_7_00,param_5,param_6,param_7);
  uVar5 = DAT_0031955c;
  uVar4 = DAT_00319558;
  iVar3 = DAT_00319554;
  fVar1 = DAT_00319550;
  if (iVar2 != 0) {
    if (extraout_s11 != DAT_00319550) {
      if (((int)ABS(extraout_s11) < DAT_00319554) ||
         (iVar2 = FUN_0031990c(param_6[1],param_6[2],DAT_0031955c,DAT_00319558,param_4,param_5_00,
                               param_6_00), iVar2 == 0)) goto LAB_0031953c;
    }
    if (param_2 != fVar1) {
      if (((int)ABS(param_2) < iVar3) ||
         (iVar2 = FUN_00322618(param_6[2],*param_6,uVar5,uVar4,param_4,param_5_00,param_6_00),
         iVar2 == 0)) goto LAB_0031953c;
    }
    if (param_3 != fVar1) {
      if (((int)ABS(param_3) < iVar3) ||
         (iVar3 = FUN_00319718(*param_6,param_6[1],uVar5,uVar4,param_4,param_5_00,param_6_00),
         iVar3 == 0)) {
LAB_0031953c:
        uVar4 = param_5[1];
        uVar5 = param_5[2];
        *param_6 = *param_5;
        param_6[1] = uVar4;
        param_6[2] = uVar5;
        return 0;
      }
    }
    iVar2 = 1;
  }
  return iVar2;
}

