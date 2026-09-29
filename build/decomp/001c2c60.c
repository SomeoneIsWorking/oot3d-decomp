// OoT3D decomp @ 001c2c60  name=FUN_001c2c60  size=508

void FUN_001c2c60(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int unaff_r7;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 6) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4;
    if (*(short *)(param_1 + 0x1c) != 10) {
      (**(code **)(*(int *)(iVar2 + 0x2a4) + 0x1d8))(param_2);
      *(undefined2 *)(param_1 + 0x2a0) = 0x11;
      FUN_0036be34(param_2,0x6b);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x2a4);
    *(undefined4 *)(param_1 + 0x378) = DAT_001c2e5c;
    FUN_0034e418(param_1);
    (**(code **)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x1c4))(param_2)
    ;
    if ((*(short *)(iVar2 + 0x1c) == 0x22) && ((*(ushort *)(DAT_001c2e60 + 0xe) & 0x8000) == 0)) {
      *(ushort *)(DAT_001c2e60 + 0xe) = *(ushort *)(DAT_001c2e60 + 0xe) | 0x8000;
      FUN_0036be34(param_2,DAT_001c2e64);
      *(undefined1 *)(param_1 + 0x28f) = 4;
      psVar1 = DAT_001c2e68;
      if (*(short *)(param_1 + 0x1c) == 10) {
        iVar2 = 0;
        psVar6 = DAT_001c2e68;
        do {
          iVar3 = (int)*psVar6;
          iVar5 = iVar3;
          if (-1 < iVar3) {
            unaff_r7 = param_1 + iVar2 * 4;
            iVar5 = *(int *)(unaff_r7 + 0x2a4);
          }
          if ((iVar5 == 0) && (iVar5 = (**(code **)(psVar1 + iVar3 * 2 + 0x20))(), -1 < iVar5)) {
            iVar3 = *(int *)(param_1 + 0x2c4);
            fVar7 = (float)VectorSignedToFloat((int)psVar6[3],(byte)(in_fpscr >> 0x15) & 3);
            fVar8 = (float)VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
            fVar9 = (float)VectorSignedToFloat((int)psVar6[1],(byte)(in_fpscr >> 0x15) & 3);
            uVar4 = z_actor_003738d0(*(float *)(iVar3 + 0x28) + fVar9,
                                     *(float *)(iVar3 + 0x2c) + fVar8,
                                     *(float *)(iVar3 + 0x30) + fVar7,param_2 + 0x208c,param_2,4,
                                     (int)*(short *)(iVar3 + 0xbc),
                                     (int)(short)(*(short *)(iVar3 + 0xbe) + psVar1[iVar2 + -0x196])
                                     ,(int)*(short *)(iVar3 + 0xc0),iVar5,1);
            *(undefined4 *)(unaff_r7 + 0x2a4) = uVar4;
          }
          iVar2 = iVar2 + 1;
          psVar6 = psVar6 + 4;
        } while (iVar2 < 8);
      }
      *(undefined2 *)(param_1 + 0x2a0) = 1;
    }
    else {
      FUN_0034e1d0(param_2,param_1);
    }
    iVar2 = 0;
    do {
      iVar5 = *(int *)(param_1 + iVar2 * 4 + 0x2a4);
      if (iVar5 != 0) {
        FUN_0025355c(iVar5,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  return;
}
