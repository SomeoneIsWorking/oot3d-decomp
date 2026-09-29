// OoT3D decomp @ 0033ea74  name=FUN_0033ea74  size=368

undefined4 FUN_0033ea74(float param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float local_2c;
  undefined1 auStack_28 [4];

  local_2c = *(float *)(param_3 + 0x2c);
  iVar2 = FUN_0033eeb8(*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30),param_2,
                       param_2 + 0xa98,&local_2c,auStack_28);
  if (iVar2 != 0) {
    local_2c = local_2c - *(float *)(param_3 + 0x2c);
    if (*(float *)(*(int *)(param_3 + 0x170c) + 0x24) <= local_2c) {
      FUN_0036055c(param_2,param_3,DAT_0033ebe4,0);
      FUN_00360190(DAT_0033ebf0,DAT_0033ebec,DAT_0033ebec,DAT_0033ebe8,param_3 + 0x254,param_2,0x3b,
                   0);
      uVar3 = DAT_0033ebf4;
      *(uint *)(param_3 + 0x1710) = *(uint *)(param_3 + 0x1710) | 0x28000000;
      *(undefined4 *)(param_3 + 0x221c) = uVar3;
      *(undefined2 *)(param_3 + 0x2238) = 0x14;
      FUN_003589dc(param_2,param_3);
      return 0;
    }
  }
  sVar1 = *(short *)(param_3 + 0xbe);
  FUN_0036055c(param_2,param_3,DAT_0033ebf8,0);
  FUN_0036b0fc(param_2,param_3);
  *(undefined1 *)(param_3 + 0x2237) = 1;
  *(undefined2 *)(param_3 + 0x2238) = 1;
  fVar4 = (float)FUN_002cfca0((int)sVar1);
  *(float *)(param_3 + 0x12c8) = *(float *)(param_3 + 0x28) + param_1 * fVar4;
  fVar4 = (float)FUN_00338f60((int)sVar1);
  *(float *)(param_3 + 0x12d0) = *(float *)(param_3 + 0x30) + param_1 * fVar4;
  uVar3 = FUN_0034d628(param_3);
  FUN_003604f0(param_3 + 0x254,param_2,uVar3);
  *(uint *)(param_3 + 0x1710) = *(uint *)(param_3 + 0x1710) | 0x20000000;
  return 1;
}
