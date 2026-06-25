// OoT3D decomp @ 00436d18  name=FUN_00436d18  size=540

void FUN_00436d18(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  bool bVar7;
  uint in_fpscr;
  int *local_2c;
  float local_28;
  float local_24;
  
  local_2c = param_1 + 0x13;
  FUN_002fa45c(*(undefined4 *)(*param_1 + 4),param_2,param_4,param_3,param_1 + 0x14);
  fVar3 = DAT_00436f38;
  pcVar2 = DAT_00436f34;
  iVar5 = *param_3;
  do {
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return;
      }
      psVar6 = (short *)(param_2 + iVar5 * 6);
      sVar4 = (*pcVar2)((int)*psVar6,(int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 1),
                        (int)*(short *)((int)param_1 + 6));
      *psVar6 = sVar4;
      *(short *)(param_1 + 2) = sVar4;
      sVar4 = (*pcVar2)((int)psVar6[1],(int)*(short *)((int)param_1 + 10),
                        (int)*(short *)(param_1 + 1),(int)*(short *)((int)param_1 + 6));
      psVar6[1] = sVar4;
      *(short *)((int)param_1 + 10) = sVar4;
      sVar4 = (*pcVar2)((int)psVar6[2],(int)*(short *)(param_1 + 3),(int)*(short *)(param_1 + 1),
                        (int)*(short *)((int)param_1 + 6));
      psVar6[2] = sVar4;
      *(short *)(param_1 + 3) = sVar4;
      if (*(char *)(param_1 + 0x12) != '\0') {
        *psVar6 = *psVar6 - *(short *)((int)param_1 + 0xe);
        psVar6[1] = psVar6[1] - *(short *)(param_1 + 4);
        psVar6[2] = psVar6[2] - *(short *)((int)param_1 + 0x12);
      }
    } while (*(char *)((int)param_1 + 0x49) == '\0');
    bVar7 = param_1[6] == 0x3f800000;
    if (bVar7) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)((float)param_1[7] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVar7) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)((float)param_1[8] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVar7) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)((float)param_1[9] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (!bVar7) goto LAB_00436eb0;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)((float)param_1[10] == fVar3) << 0x1e;
    bVar7 = SUB41(in_fpscr >> 0x1e,0);
    if (bVar7) {
      bVar7 = param_1[0xb] == 0x3f800000;
    }
    if (bVar7) {
      in_fpscr = uVar1 | (uint)((float)param_1[0xc] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (!bVar7) goto LAB_00436eb0;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)((float)param_1[0xd] == fVar3) << 0x1e;
    bVar7 = SUB41(in_fpscr >> 0x1e,0);
    if (bVar7) {
      in_fpscr = uVar1 | (uint)((float)param_1[0xe] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVar7) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)((float)param_1[0xf] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (!bVar7) goto LAB_00436eb0;
    bVar7 = param_1[0x10] == 0x3f800000;
    if (bVar7) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)((float)param_1[0x11] == fVar3) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (!bVar7) {
LAB_00436eb0:
      local_2c = (int *)VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
      local_28 = (float)VectorSignedToFloat((int)psVar6[1],(byte)(in_fpscr >> 0x15) & 3);
      local_24 = (float)VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
      FUN_003735ac(&local_2c,param_1 + 6,&local_2c);
      *psVar6 = (short)(int)(float)local_2c;
      psVar6[1] = (short)(int)local_28;
      psVar6[2] = (short)(int)local_24;
    }
  } while( true );
}

