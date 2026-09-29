// OoT3D decomp @ 0030ec4c  name=FUN_0030ec4c  size=328

int FUN_0030ec4c(uint *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;

  if (param_5 != 0) {
    if (param_5 == 1) {
      bVar5 = CARRY4(param_3,param_1[1]);
      param_3 = param_3 + param_1[1];
      param_4 = param_4 + param_1[2] + (uint)bVar5;
    }
    else {
      if (param_5 != 2) {
        return DAT_0030ecf8;
      }
      iVar1 = FUN_002eb030(&local_20,*param_1 & 0xfffffffe);
      if (iVar1 < 0) {
        param_1[3] = 0;
        param_1[4] = 0;
        return iVar1;
      }
      param_1[3] = local_20;
      param_1[4] = uStack_1c;
      bVar5 = CARRY4(param_3,local_20);
      param_3 = param_3 + local_20;
      param_4 = param_4 + uStack_1c + (uint)bVar5;
    }
  }
  iVar1 = DAT_004537e0;
  if (-1 < (int)param_4) {
    uVar2 = param_1[3];
    uVar4 = param_1[4];
    if ((int)(param_4 - (uVar4 + (param_3 < uVar2))) < 0 !=
        (SBORROW4(param_4,uVar4) != SBORROW4(param_4 - uVar4,(uint)(param_3 < uVar2)))) {
LAB_004537d0:
      param_1[1] = param_3;
      param_1[2] = param_4;
      return 0;
    }
    iVar3 = FUN_002eb030(&local_28,*param_1 & 0xfffffffe,param_3 - uVar2);
    if (iVar3 < 0) {
      param_1[3] = 0;
      param_1[4] = 0;
      iVar1 = iVar3;
    }
    else {
      param_1[3] = local_28;
      param_1[4] = uStack_24;
      if ((int)(uStack_24 - (param_4 + (local_28 < param_3))) < 0 ==
          (SBORROW4(uStack_24,param_4) != SBORROW4(uStack_24 - param_4,(uint)(local_28 < param_3))))
      goto LAB_004537d0;
    }
  }
  return iVar1;
}
