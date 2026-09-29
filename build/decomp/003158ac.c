// OoT3D decomp @ 003158ac  name=FUN_003158ac  size=96

undefined4 FUN_003158ac(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;

  bVar3 = *(int *)(param_1 + 0xb18) == DAT_00315914;
  fVar4 = DAT_0031590c;
  if (bVar3) {
    fVar4 = DAT_00315918;
  }
  uVar2 = DAT_00315910;
  if (bVar3) {
    uVar2 = DAT_00315910 | DAT_00315910 << 1;
  }
  if (*(float *)(param_1 + 0x94) <= fVar4 * fVar4) {
    iVar1 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < (int)uVar2) {
      return 1;
    }
  }
  return 0;
}
