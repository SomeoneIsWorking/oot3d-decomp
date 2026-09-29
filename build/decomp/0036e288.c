// OoT3D decomp @ 0036e288  name=FUN_0036e288  size=256

void FUN_0036e288(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint in_fpscr;
  undefined2 uVar5;
  float fVar6;

  uVar4 = FUN_00363c10(param_2 + 0x3a58,0x17c);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  FUN_00370350(DAT_0036e388,param_1 + 0x1a8,0x1a);
  uVar1 = DAT_0036e394;
  uVar4 = DAT_0036e390;
  *(undefined4 *)(param_1 + 0xac0) = DAT_0036e38c;
  *(undefined4 *)(param_1 + 0xaf4) = uVar4;
  fVar6 = (float)FUN_00371e50();
  fVar3 = DAT_0036e39c;
  fVar2 = DAT_0036e398;
  if ((short)(int)fVar6 + 0x1e < 1) {
    fVar6 = (float)FUN_00371e50(uVar1);
    fVar6 = (float)VectorSignedToFloat((short)(int)fVar6 + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = (undefined2)(int)(fVar6 * fVar2 * fVar3 - fVar3);
  }
  else {
    fVar6 = (float)FUN_00371e50(uVar1);
    fVar6 = (float)VectorSignedToFloat((short)(int)fVar6 + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = (undefined2)(int)(fVar3 + fVar6 * fVar2 * fVar3);
  }
  uVar4 = DAT_0036e3a0;
  *(undefined2 *)(param_1 + 0xae2) = uVar5;
  *(undefined2 *)(param_1 + 0xaee) = 0;
  *(undefined4 *)(*(int *)(DAT_0036e3a4 + 0x44) + 0x1704) = uVar4;
  return;
}
