// OoT3D decomp @ 00188704  name=FUN_00188704  size=420

void FUN_00188704(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_34;
  float local_30;
  undefined4 uStack_2c;

  iVar1 = DAT_00188968;
  if (*(short *)(param_1 + 0x1e0) != 0) {
    *(short *)(param_1 + 0x1e0) = *(short *)(param_1 + 0x1e0) + -1;
    fVar6 = DAT_0018898c;
    if (*(short *)(param_1 + 0x234) == 0) {
      iVar2 = *(int *)(DAT_00188984 + param_2);
      fVar7 = ABS(*(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28));
      fVar8 = ABS(*(float *)(iVar2 + 0x30) - *(float *)(param_1 + 0x30));
      bVar4 = fVar7 == *(float *)(iVar1 + 0x18);
      bVar5 = *(float *)(iVar1 + 0x18) <= fVar7;
      if (!bVar5 || bVar4) {
        bVar4 = fVar8 == *(float *)(iVar1 + 0x1c);
        bVar5 = *(float *)(iVar1 + 0x1c) <= fVar8;
      }
      if ((!bVar5 || bVar4) && (*(int *)(iVar2 + 0x2c) < DAT_00188988)) {
        puVar3 = (undefined4 *)FUN_0036f57c(iVar2,0xb);
        uStack_2c = *(undefined4 *)(param_1 + 0x30);
        local_30 = (float)puVar3[1] + fVar6;
        local_34 = *puVar3;
        FUN_0036e670(param_2,&local_34,0,0,0,
                     (int)(short)(int)(DAT_00188990 +
                                      ((*(float *)(iVar1 + 0x1c) - fVar8) / *(float *)(iVar1 + 0x1c)
                                      ) * DAT_00188994));
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    else {
      *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
    }
    return;
  }
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 == 0 && *DAT_0018896c == 0) {
    fVar6 = *(float *)(param_1 + 0x98);
  }
  else {
    fVar8 = *(float *)(param_2 + 0x1b8) - *(float *)(param_1 + 0x28);
    fVar6 = *(float *)(param_2 + 0x1bc) - *(float *)(param_1 + 0x2c);
    fVar7 = *(float *)(param_2 + 0x1c0) - *(float *)(param_1 + 0x30);
    fVar6 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) * DAT_00188970;
  }
  if (DAT_00188974 < (int)fVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(*(undefined4 *)(iVar1 + 0x14),DAT_00188978);
}
