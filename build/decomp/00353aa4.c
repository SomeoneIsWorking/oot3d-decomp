// OoT3D decomp @ 00353aa4  name=FUN_00353aa4  size=196

void FUN_00353aa4(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;

  fVar2 = DAT_00353b68;
  puVar4 = (undefined4 *)(DAT_00353b6c + param_2 * 0x10);
  fVar6 = DAT_00353b68;
  if ((-1 < *param_3) && (*param_3 != param_2)) {
    fVar6 = (float)puVar4[3];
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)((float)puVar4[1] < DAT_00353b68) << 0x1f;
  uVar5 = uVar1 | (uint)(NAN((float)puVar4[1]) || NAN(DAT_00353b68)) << 0x1c;
  uVar3 = *(undefined4 *)(DAT_00353b6c + param_2 * 0x10);
  if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar5 >> 0x1c) & 1)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,uVar3);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(uVar5 >> 0x15) & 3);
    FUN_00375c08(puVar4[1],fVar2,uVar3,fVar6,param_1 + 0x1a4,*puVar4,*(undefined1 *)(puVar4 + 2));
  }
  else {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,uVar3);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(uVar5 >> 0x15) & 3);
    FUN_00375c08(puVar4[1],uVar3,fVar2,fVar6,param_1 + 0x1a4,*puVar4,*(undefined1 *)(puVar4 + 2));
  }
  *param_3 = param_2;
  return;
}
