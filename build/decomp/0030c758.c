// OoT3D decomp @ 0030c758  name=FUN_0030c758  size=100

undefined4 * FUN_0030c758(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;

  if (((*DAT_0030c7bc & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_0030c7bc), puVar1 = DAT_0030c7c0, iVar2 != 0)) {
    puVar3 = DAT_0030c7c0 + 2;
    *DAT_0030c7c0 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar3;
    puVar1[3] = puVar3;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
  }
  return DAT_0030c7c0;
}
