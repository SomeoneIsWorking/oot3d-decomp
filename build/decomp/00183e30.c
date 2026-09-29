// OoT3D decomp @ 00183e30  name=FUN_00183e30  size=312

void FUN_00183e30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;

  iVar3 = *(int *)(DAT_00183f68 + param_2);
  if (*(int *)(param_1 + 0x4cc) == 3) {
    FUN_00320d7c(param_2,0,1);
    uVar2 = FUN_00367d74(param_2);
    iVar1 = DAT_00183f6c;
    *(short *)(DAT_00183f6c + 2) = (short)uVar2;
    FUN_00320d7c(param_2,uVar2,7);
    local_2c = *(float *)(param_1 + 0x28);
    local_28 = DAT_00183f70;
    local_24 = *(float *)(param_1 + 0x30);
    local_38 = *(float *)(iVar3 + 0x28);
    local_34 = DAT_00183f74;
    local_30 = *(float *)(iVar3 + 0x30);
    fVar5 = local_38 - local_2c;
    fVar4 = local_30 - local_24;
    uVar2 = FUN_003758b0(fVar5,fVar4);
    fVar5 = SQRT(fVar5 * fVar5 + fVar4 * fVar4) + DAT_00183f78;
    fVar4 = (float)FUN_00338f60();
    local_38 = local_38 + fVar4 * fVar5;
    fVar4 = (float)FUN_002cfca0(uVar2);
    local_30 = local_30 + fVar4 * fVar5;
    *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) | 0x20000000;
    FUN_00367b14(param_2,(int)*(short *)(iVar1 + 2),&local_2c,&local_38);
    FUN_00354220(DAT_00183f7c,param_2,(int)*(short *)(iVar1 + 2));
    *(undefined4 *)(param_1 + 0x4cc) = 4;
    FUN_00367c7c(param_2,DAT_00183f80,0);
    *(undefined4 *)(param_1 + 0x490) = DAT_00183f84;
  }
  return;
}
