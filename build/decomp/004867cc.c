// OoT3D decomp @ 004867cc  name=FUN_004867cc  size=124

undefined2 FUN_004867cc(float param_1)

{
  float fVar1;

  fVar1 = DAT_0048684c;
  if ((param_1 <= DAT_0048684c) && (fVar1 = param_1, param_1 < DAT_00486848)) {
    fVar1 = DAT_00486848;
  }
  if ((int)fVar1 < DAT_00486850) {
    return 0x50;
  }
  if (DAT_00486854 <= (int)fVar1) {
    return 16000;
  }
  return *(undefined2 *)(DAT_00486860 + (int)((fVar1 - DAT_00486858) * DAT_0048685c) * 2);
}
