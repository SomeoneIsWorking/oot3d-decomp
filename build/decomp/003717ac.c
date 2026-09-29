// OoT3D decomp @ 003717ac  name=FUN_003717ac  size=88

void FUN_003717ac(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;

  puVar4 = (undefined4 *)(param_2 + param_3 * 0x18);
  fVar6 = (float)puVar4[3];
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_00371804) << 0x1f |
          (uint)(fVar6 == DAT_00371804) << 0x1e;
  uVar5 = uVar1 | (uint)(NAN(fVar6) || NAN(DAT_00371804)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar5 >> 0x1c) & 1)) {
    uVar3 = FUN_0036ae18(param_1,*puVar4);
    fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(uVar5 >> 0x15) & 3);
  }
  FUN_00375c08(puVar4[1],puVar4[2],fVar6,puVar4[5],param_1,*puVar4,*(undefined1 *)(puVar4 + 4));
  return;
}
