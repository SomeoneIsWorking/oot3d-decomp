// OoT3D decomp @ 003b8e4c  name=FUN_003b8e4c  size=524

void FUN_003b8e4c(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  byte *pbVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 uStack_2c;

  uVar1 = DAT_003b9058;
  local_34 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x30);
  local_40 = *(undefined4 *)(param_1 + 8);
  local_30 = *(float *)(param_1 + 0x2c) + DAT_003b905c;
  local_3c = *(float *)(param_1 + 0xc) + DAT_003b9060;
  local_38 = *(float *)(param_1 + 0x10) + DAT_003b9064;
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0xd46),&local_34,&local_40);
  if ((~(int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0) {
    pbVar5 = (byte *)(*(int *)(param_2 + 0x5c20) +
                     (((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 5));
    psVar3 = (short *)(*(int *)(pbVar5 + 4) + *(short *)(param_1 + 0xd3e) * 6);
    fVar6 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 - *(float *)(param_1 + 0x28);
    fVar9 = (float)VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 - *(float *)(param_1 + 0x30);
    fVar7 = (float)FUN_003696ec();
    FUN_00375a18(param_1 + 0x36,(int)(short)(int)(fVar7 * DAT_003b9068),10,1000,1);
    if ((int)(fVar6 * fVar6 + fVar9 * fVar9) < DAT_003b906c) {
      sVar2 = *(short *)(param_1 + 0xd3e) + 1;
      *(short *)(param_1 + 0xd3e) = sVar2;
      if ((short)(ushort)*pbVar5 <= sVar2) {
        *(undefined2 *)(param_1 + 0xd3e) = 0;
      }
      if (*(short *)(param_1 + 0xd3e) == 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_003b9070,1);
        FUN_00316cec(param_2,0x1b,0x14);
        if ((~(int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0) {
          pbVar5 = (byte *)(*(int *)(param_2 + 0x5c20) +
                           (((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 5));
          iVar4 = *(int *)(pbVar5 + 4) + (uint)*pbVar5 * 6;
          uVar8 = VectorSignedToFloat((int)*(short *)(iVar4 + -6),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x28) = uVar8;
          uVar8 = VectorSignedToFloat((int)*(short *)(iVar4 + -4),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x2c) = uVar8;
          uVar8 = VectorSignedToFloat((int)*(short *)(iVar4 + -2),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x30) = uVar8;
        }
        *(ushort *)(DAT_003b9074 + 0xf2) = *(ushort *)(DAT_003b9074 + 0xf2) | 8;
        uVar8 = DAT_003b9078;
        *(undefined4 *)(param_1 + 0x6c) = uVar1;
        *(undefined4 *)(param_1 + 0xcb8) = uVar8;
      }
    }
  }
  iVar4 = FUN_003736fc(DAT_003b9080,DAT_003b907c,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_00375bcc(param_1,DAT_003b9084);
  }
  return;
}
