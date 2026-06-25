// OoT3D decomp @ 003598c8  name=FUN_003598c8  size=408

undefined4
FUN_003598c8(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined local_2c [4];
  
  fVar3 = (float)FUN_00338f60((int)*(short *)(param_6 + 0xbe));
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_6 + 0xbe));
  local_38 = *(float *)(param_6 + 0x28) + param_4 * fVar4;
  local_30 = *(float *)(param_6 + 0x30) + param_4 * fVar3;
  local_44 = *(float *)(param_6 + 0x28) + param_3 * fVar4;
  local_3c = *(float *)(param_6 + 0x30) + param_3 * fVar3;
  local_40 = *(float *)(param_6 + 0x2c) + param_1;
  local_34 = local_40;
  iVar1 = FUN_00369f9c(param_5 + 0xa98,&local_38,&local_44,local_50,param_6 + 0x78,1,0,0,1,local_2c)
  ;
  if (iVar1 != 0) {
    *(ushort *)(param_6 + 0x90) = *(ushort *)(param_6 + 0x90) | 0x200;
    *(undefined *)(param_6 + 0x80) = local_2c[0];
    iVar1 = *(int *)(param_6 + 0x78);
    uVar2 = FUN_0035fee8(param_5 + 0xa98,iVar1);
    fVar3 = DAT_00359a64;
    *(undefined4 *)(DAT_00359a60 + 0x34) = uVar2;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    uVar2 = FUN_003758b0(-(fVar5 * fVar3),-(fVar4 * fVar3));
    FUN_00370378(param_6 + 0xbe,uVar2,800);
    *(undefined2 *)(DAT_00359a68 + param_6) = *(undefined2 *)(param_6 + 0xbe);
    fVar3 = (float)FUN_002cfca0();
    *(float *)(param_6 + 0x28) = local_50[0] - param_2 * fVar3;
    fVar3 = (float)FUN_00338f60((int)*(short *)(param_6 + 0xbe));
    *(float *)(param_6 + 0x30) = local_48 - param_2 * fVar3;
    return 1;
  }
  *(ushort *)(param_6 + 0x90) = *(ushort *)(param_6 + 0x90) & 0xfdff;
  return 0;
}

