// OoT3D decomp @ 0025ac68  name=FUN_0025ac68  size=312

undefined4 FUN_0025ac68(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float local_2c [2];
  float local_24;

  iVar5 = *(int *)(param_2 + 0x20ac);
  iVar2 = FUN_0032d8d8();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x128);
    iVar4 = *(int *)(param_2 + 0x20ac);
    if ((*(float *)(param_1 + 0x98) <=
         *(float *)(((uint)(int)*(short *)(param_1 + 0x1c) >> 9 & 0x1c) + DAT_0025ada0)) ||
       (*(float *)(iVar2 + 0x98) <=
        *(float *)(((uint)(int)*(short *)(iVar2 + 0x1c) >> 9 & 0x1c) + DAT_0025ada0))) {
      FUN_0036c5d8(param_1,local_2c,iVar4 + 0x28);
      fVar9 = DAT_0025ada8;
      fVar1 = DAT_0025ada4;
      fVar8 = DAT_0025ada8 + *(float *)(param_1 + 0x54) * DAT_0025ada4;
      bVar6 = ABS(local_2c[0]) == fVar8;
      bVar7 = fVar8 <= ABS(local_2c[0]);
      if (!bVar7 || bVar6) {
        bVar6 = ABS(local_24) == fVar8;
        bVar7 = fVar8 <= ABS(local_24);
      }
      if (bVar7 && !bVar6) {
        FUN_0036c5d8(iVar2,local_2c,iVar4 + 0x28);
        fVar9 = fVar9 + *(float *)(iVar2 + 0x54) * fVar1;
        bVar6 = ABS(local_2c[0]) == fVar9;
        bVar7 = fVar9 <= ABS(local_2c[0]);
        if (!bVar7 || bVar6) {
          bVar6 = ABS(local_24) == fVar9;
          bVar7 = fVar9 <= ABS(local_24);
        }
        if (bVar7 && !bVar6) {
          uVar3 = *(uint *)(iVar5 + 0x1714);
          if ((uVar3 & 0x1000000) == 0) {
            *(uint *)(iVar5 + 0x1714) = uVar3 | 0x800000;
          }
          else {
            FUN_0037073c(param_2,1);
            *(undefined4 *)(param_1 + 0x1c0) = DAT_0025adac;
          }
        }
      }
    }
  }
  return 0;
}
