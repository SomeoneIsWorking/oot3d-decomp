// OoT3D decomp @ 00364670  name=FUN_00364670  size=704

undefined4 FUN_00364670(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;

  if (param_2[3] == -1) {
    local_30 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                                *(undefined4 *)(param_1 + 0x30),param_3 + 0x208c,param_3,7,0,0,
                                (int)*(char *)(param_1 + 0x1e),param_4,1);
    if (local_30 != 0) {
      *(int *)(param_1 + 0x128) = local_30;
      *(int *)(local_30 + 0x124) = param_1;
      if (-1 < *(char *)(local_30 + 3)) {
        *(undefined1 *)(local_30 + 3) = *(undefined1 *)(param_1 + 3);
      }
    }
    FUN_001f778c(local_30,param_3,param_5,(int)(short)param_2[2],param_1 + 0x54);
    fVar3 = DAT_00364934;
    fVar2 = DAT_00364930;
    sVar1 = (short)param_2[2];
    while (0 < sVar1) {
      fVar8 = *(float *)(param_1 + 0x58);
      fVar7 = fVar2 / *(float *)(param_1 + 0x54);
      pfVar4 = (float *)(*param_2 + (short)param_2[2] * 0x30);
      fVar9 = *(float *)(param_1 + 0x5c);
      *pfVar4 = *pfVar4 * fVar7;
      fVar8 = fVar2 / fVar8;
      pfVar4[4] = pfVar4[4] * fVar7;
      fVar9 = fVar2 / fVar9;
      pfVar4[8] = pfVar4[8] * fVar7;
      pfVar4[1] = pfVar4[1] * fVar8;
      pfVar4[5] = pfVar4[5] * fVar8;
      pfVar4[9] = pfVar4[9] * fVar8;
      pfVar4[2] = pfVar4[2] * fVar9;
      pfVar4[6] = pfVar4[6] * fVar9;
      pfVar4[10] = pfVar4[10] * fVar9;
      iVar6 = (int)(short)param_2[2];
      iVar5 = *param_2;
      local_3c = *(undefined4 *)(iVar6 * 0x30 + 0xc + iVar5);
      local_38 = *(undefined4 *)(iVar6 * 0x30 + 0x1c + iVar5);
      local_34 = *(undefined4 *)(iVar5 + iVar6 * 0x30 + 0x2c);
      FUN_003624c8(*param_2 + (short)param_2[2] * 0x30,auStack_44,0);
      iVar5 = (int)(short)param_2[2];
      iVar6 = *param_2;
      if (((*(float *)(iVar6 + iVar5 * 0x30) == fVar3) &&
          (*(float *)(iVar5 * 0x30 + 0x14 + iVar6) == fVar3)) &&
         (*(float *)(iVar6 + iVar5 * 0x30 + 0x28) == fVar3)) {
        FUN_00340824(local_30,param_3,iVar5 + -1,0xffffffff,&local_3c,auStack_44);
      }
      else {
        FUN_00340824(local_30,param_3,iVar5 + -1,*(undefined4 *)(param_2[1] + iVar5 * 4),&local_3c,
                     auStack_44);
      }
      sVar1 = (short)param_2[2] + -1;
      *(short *)(param_2 + 2) = sVar1;
    }
    param_2[3] = 0;
    if (*param_2 != 0) {
      FUN_0034fc6c();
      *param_2 = 0;
    }
    if (param_2[1] != 0) {
      FUN_0034fc6c();
      param_2[1] = 0;
    }
    return 1;
  }
  return 0;
}
