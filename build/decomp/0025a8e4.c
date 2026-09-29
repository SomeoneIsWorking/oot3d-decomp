// OoT3D decomp @ 0025a8e4  name=FUN_0025a8e4  size=620

void FUN_0025a8e4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_70 [48];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  FUN_0035c528(DAT_0025ab50);
  FUN_0034b50c(param_1,3,param_1 + 0xab8);
  fVar8 = DAT_0025ab60;
  uVar6 = DAT_0025ab58;
  *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) & 0xfffffff9;
  *(ushort *)(DAT_0025ab54 + 0xfe) =
       *(ushort *)(DAT_0025ab54 + 0xfe) | (ushort)(1 << (*(ushort *)(param_1 + 0x1c) & 3));
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  iVar2 = DAT_0025ab5c;
  puVar3 = (undefined4 *)(DAT_0025ab5c + (*(ushort *)(param_1 + 0x1c) & 3) * 0x10);
  uVar6 = puVar3[3];
  *(undefined4 *)(param_1 + 0xac0) = 1;
  *(undefined4 *)(param_1 + 0xac4) = uVar6;
  *(undefined4 *)(param_1 + 0xac4) = puVar3[3];
  local_34 = *puVar3;
  local_30 = puVar3[1];
  local_2c = *(undefined4 *)(iVar2 + (*(ushort *)(param_1 + 0x1c) & 3) * 0x10 + 8);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar7 * fVar8,auStack_70,0);
  FUN_003735ac(&local_40,auStack_70,&local_34);
  fVar8 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0xae8) = fVar8 + local_40;
  *(float *)(param_1 + 0xad0) = fVar8 + local_40;
  local_3c = *(float *)(param_1 + 0x2c) + local_3c;
  *(float *)(param_1 + 0xaec) = local_3c;
  *(float *)(param_1 + 0xad4) = local_3c;
  fVar7 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0xaf0) = fVar7 + local_38;
  *(float *)(param_1 + 0xad8) = fVar7 + local_38;
  *(float *)(param_1 + 0xaf4) = fVar8;
  *(float *)(param_1 + 0xadc) = fVar8;
  fVar8 = *(float *)(param_1 + 0x2c) + DAT_0025ab64;
  *(float *)(param_1 + 0xaf8) = fVar8;
  *(float *)(param_1 + 0xae0) = fVar8;
  *(float *)(param_1 + 0xafc) = fVar7;
  *(float *)(param_1 + 0xae4) = fVar7;
  uVar6 = FUN_00367d74(param_2);
  *(undefined4 *)(param_1 + 0xac8) = uVar6;
  FUN_00320d7c(param_2,0,1);
  FUN_00320d7c(param_2,(int)(short)*(undefined4 *)(param_1 + 0xac8),7);
  FUN_00367b14(param_2,(int)(short)*(undefined4 *)(param_1 + 0xac8),param_1 + 0xaf4,param_1 + 0xae8)
  ;
  FUN_00354220(*(undefined4 *)(param_2 + 0x4a8),param_2,(int)(short)*(undefined4 *)(param_1 + 0xac8)
              );
  FUN_0036e980(param_2,param_1,1);
  iVar2 = DAT_0025ab70;
  fVar8 = DAT_0025ab6c;
  sVar1 = *(short *)(param_1 + 0x1c);
  iVar4 = *(int *)(DAT_0025ab68 + param_2);
  while( true ) {
    psVar5 = (short *)(*(int *)(iVar4 + ((uint)(int)sVar1 >> 1 & 0x78) + 4) +
                      *(int *)(param_1 + 0xab0) * 6);
    fVar7 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 - *(float *)(param_1 + 0x28);
    fVar9 = (float)VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 - *(float *)(param_1 + 0x30);
    fVar10 = (float)FUN_003696ec(fVar7,fVar9);
    *(short *)(param_1 + 0xacc) = (short)(int)(fVar10 * fVar8);
    if (iVar2 < (int)SQRT(fVar7 * fVar7 + fVar9 * fVar9)) break;
    *(int *)(param_1 + 0xab0) = *(int *)(param_1 + 0xab0) + 1;
  }
  *(undefined4 *)(param_1 + 0xa48) = DAT_0025ab74;
  return;
}
