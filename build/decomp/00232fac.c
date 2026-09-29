// OoT3D decomp @ 00232fac  name=FUN_00232fac  size=496

undefined4 FUN_00232fac(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  fVar2 = DAT_0023319c;
  if (param_2[3] == -1) {
    if (0 < (short)param_2[2]) {
      do {
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
        iVar5 = z_actor_003738d0(*(undefined4 *)(iVar6 * 0x30 + 0xc + iVar5),
                                 *(undefined4 *)(iVar6 * 0x30 + 0x1c + iVar5),
                                 *(undefined4 *)(iVar5 + iVar6 * 0x30 + 0x2c),param_3 + 0x208c,
                                 param_3,7,0,0,(int)*(char *)(param_1 + 0x1e),param_4,1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          *(int *)(param_1 + 0x128) = iVar5;
          *(int *)(iVar5 + 0x124) = param_1;
          if (-1 < *(char *)(iVar5 + 3)) {
            *(undefined1 *)(iVar5 + 3) = *(undefined1 *)(param_1 + 3);
          }
        }
        if (iVar5 != 0) {
          FUN_0026c4a0(iVar5,param_3,param_5,*(undefined4 *)(param_2[1] + (short)param_2[2] * 4),
                       *param_2 + (short)param_2[2] * 0x30,param_1 + 0x54);
        }
        sVar1 = (short)param_2[2] + -1;
        *(short *)(param_2 + 2) = sVar1;
      } while (0 < sVar1);
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
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
