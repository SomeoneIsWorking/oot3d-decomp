// OoT3D decomp @ 0037693c  name=FUN_0037693c  size=144

void FUN_0037693c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint in_fpscr;

  puVar1 = DAT_003769cc;
  puVar4 = DAT_003769cc + 0x26;
  if (((DAT_003769cc[3] & 1) == 0) && (iVar2 = FUN_003679b4(DAT_003769cc + 3), iVar2 != 0)) {
    *puVar4 = *puVar1;
    puVar1[0x29] = puVar1[1];
    puVar1[0x2c] = puVar1[2];
  }
  uVar3 = FUN_0036ae14(param_1 + 0x210,puVar4[param_2 * 3]);
  *(char *)(param_1 + 0x202) = (char)param_2;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003769d4,DAT_003769d0,uVar3,puVar4[param_2 * 3 + 2],param_1 + 0x210,
               puVar4[param_2 * 3],*(undefined1 *)(puVar4 + param_2 * 3 + 1));
  return;
}
