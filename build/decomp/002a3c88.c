// OoT3D decomp @ 002a3c88  name=FUN_002a3c88  size=604

void FUN_002a3c88(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 local_34;
  float local_30;
  undefined4 uStack_2c;

  iVar7 = *(int *)(DAT_002a3ee4 + param_2);
  if (*(short *)(param_1 + 0xc90) != 0) {
    *(short *)(param_1 + 0xc90) = *(short *)(param_1 + 0xc90) + -1;
  }
  if (*(short *)(param_1 + 0xc92) != 0) {
    *(short *)(param_1 + 0xc92) = *(short *)(param_1 + 0xc92) + -1;
  }
  if (*(short *)(param_1 + 0xc94) != 0) {
    *(short *)(param_1 + 0xc94) = *(short *)(param_1 + 0xc94) + -1;
  }
  if (*(short *)(param_1 + 0xc96) != 0) {
    *(short *)(param_1 + 0xc96) = *(short *)(param_1 + 0xc96) + -1;
  }
  if (*(short *)(DAT_002a3ee8 + 0x60) == 10) {
    FUN_00358e70();
  }
  uVar1 = DAT_002a3eec;
  if (*(short *)(param_1 + 0xc94) == 0) {
    *(undefined2 *)(param_1 + 0xc94) = 2;
    sVar4 = *(short *)(param_1 + 0xc9a) + 1;
    *(short *)(param_1 + 0xc9a) = sVar4;
    if (2 < sVar4) {
      *(undefined2 *)(param_1 + 0xc9a) = 0;
      fVar9 = (float)FUN_00371e50(uVar1);
      fVar3 = DAT_002a3ef4;
      fVar2 = DAT_002a3ef0;
      if ((short)(int)fVar9 + 0x14 < 1) {
        fVar9 = (float)FUN_00371e50(uVar1);
        fVar9 = (float)VectorSignedToFloat((short)(int)fVar9 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
        uVar5 = (undefined2)(int)(fVar9 * fVar2 * fVar3 - fVar3);
      }
      else {
        fVar9 = (float)FUN_00371e50(uVar1);
        fVar9 = (float)VectorSignedToFloat((short)(int)fVar9 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
        uVar5 = (undefined2)(int)(fVar3 + fVar9 * fVar2 * fVar3);
      }
      *(undefined2 *)(param_1 + 0xc94) = uVar5;
    }
  }
  (**(code **)(param_1 + 0xc7c))(param_1,param_2);
  FUN_0037322c(DAT_002a3ef8,param_1);
  uVar6 = *(undefined4 *)(iVar7 + 0x2c);
  uVar8 = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(param_1 + 0xd38) = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(param_1 + 0xd3c) = uVar6;
  *(undefined4 *)(param_1 + 0xd40) = uVar8;
  *(undefined4 *)(param_1 + 0xd3c) = *(undefined4 *)(iVar7 + 0x2c);
  FUN_0034c664(param_1,param_1 + 0xd20,2,4);
  *(undefined2 *)(param_1 + 0xc80) = *(undefined2 *)(param_1 + 0xd28);
  *(undefined2 *)(param_1 + 0xc82) = *(undefined2 *)(param_1 + 0xd2a);
  *(undefined2 *)(param_1 + 0xc84) = *(undefined2 *)(param_1 + 0xd2c);
  FUN_0035fb94(param_1 + 0xc86,param_1 + 0xd2e);
  fVar2 = DAT_002a3f00;
  if ((*(uint *)(DAT_002a3efc + param_2) & 0xf) == 0) {
    local_34 = *(undefined4 *)(param_1 + 0x28);
    uStack_2c = *(undefined4 *)(param_1 + 0x30);
    local_30 = *(float *)(param_1 + 0x2c) + DAT_002a3f00;
    FUN_00362068(param_2,&local_34,100,500,0x1e);
  }
  *(short *)(param_1 + 0xc8c) = *(short *)(param_1 + 0xc8c) + 1;
  FUN_00376340(fVar2,fVar2,uVar1,param_2,param_1,0x1d);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xd48);
  return;
}
