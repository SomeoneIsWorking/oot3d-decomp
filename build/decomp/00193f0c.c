// OoT3D decomp @ 00193f0c  name=FUN_00193f0c  size=660

void FUN_00193f0c(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  uVar3 = DAT_001941a8;
  iVar9 = *(int *)(DAT_001941a0 + param_2);
  iVar10 = *(int *)(DAT_001941a4 + iVar9);
  iVar11 = iVar10;
  if (iVar10 != 0) {
    iVar11 = iVar10 + 0x100;
    *(undefined2 *)(iVar10 + 0x118) = 10;
  }
  *(undefined2 *)(iVar9 + 0x118) = 10;
  if ((*(ushort *)(param_1 + 0x116) == uVar3) && (*(short *)(param_1 + 0x464) != 0)) {
    sVar1 = *(short *)(param_1 + 0x464) + -1;
    if (sVar1 == 0) {
      iVar11 = DAT_001941ac;
    }
    *(short *)(param_1 + 0x464) = sVar1;
    if (sVar1 == 0) {
      FUN_00375bcc(param_1,iVar11);
    }
  }
  fVar6 = DAT_001941bc;
  fVar5 = DAT_001941b8;
  uVar4 = DAT_001941b0;
  if (*(short *)(param_1 + 0xd88) == 0) {
    sVar1 = *(short *)(*DAT_001941b4 + 0x110);
    uVar2 = *(ushort *)(param_2 + 0x22b8);
    *(ushort *)(param_2 + 0x22b8) = uVar2 + 1;
    uVar8 = DAT_001941cc;
    uVar7 = DAT_001941c8;
    uVar4 = DAT_001941c4;
    fVar12 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(uint)uVar2 < (int)(fVar5 / fVar12 + fVar6)) {
      FUN_0036e168(DAT_001941c4,DAT_001941cc,DAT_001941c8,DAT_001941c4,param_1 + 0xd70);
      FUN_0036e168(DAT_001941d0,uVar8,uVar7,uVar4,param_1 + 0xd74);
      FUN_0036e168(uVar4,uVar8,uVar7,uVar4,param_1 + 0xd78);
      FUN_0036e168(uVar4,uVar8,uVar7,uVar4,param_1 + 0xd7c);
      FUN_0036e168(fVar5,uVar8,uVar7,uVar4,param_1 + 0xd80);
      FUN_0036e168(DAT_001941d4,uVar8,uVar7,uVar4,param_1 + 0xd84);
      local_38 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xd70);
      local_34 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xd74);
      local_30 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xd78);
      local_44 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xd7c);
      local_40 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xd80);
      local_3c = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xd84);
      FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x468),&local_38,&local_44);
      return;
    }
    *(undefined4 *)(param_1 + 0x3fc) = DAT_001941c0;
  }
  else if (*(short *)(param_1 + 0xd88) == 2) {
    if (*(ushort *)(param_1 + 0x116) != uVar3) {
      FUN_00371680(param_2,0);
      *(undefined2 *)(param_1 + 0xd88) = 0;
      return;
    }
    *(short *)(param_1 + 0x116) = (short)DAT_001941b0;
    FUN_00367c7c(param_2,uVar4,0);
    *(undefined2 *)(param_1 + 0xd88) = 1;
    FUN_0035c414(param_1,3);
  }
  return;
}
