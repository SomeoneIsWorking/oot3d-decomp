// OoT3D decomp @ 00370170  name=FUN_00370170  size=320

void FUN_00370170(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;

  if (((*DAT_003702b0 & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_003702b0), puVar2 = DAT_003702b8, uVar1 = DAT_003702b4, iVar3 != 0))
  {
    *DAT_003702b8 = DAT_003702b4;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  iVar3 = DAT_003702bc;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined2 *)(iVar3 + param_1) = 0x96;
  *(undefined1 *)(param_1 + 0x9e5) = 0x20;
  *(undefined1 *)(param_1 + 0xa84) = 3;
  *(byte *)(param_1 + 0xa81) = *(byte *)(param_1 + 0xa81) & 0xfb;
  if (param_2 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x28);
    local_14 = *(float *)(param_1 + 0x2c) + DAT_003702c0;
    local_10 = *(undefined4 *)(param_1 + 0x30);
    FUN_003642f4(param_2,&local_18,DAT_003702b8,DAT_003702b8,0x96,0,0xff,0xff,0xff,0x9b,0x96,0x96,
                 0x96,1,0xb,0);
  }
  FUN_0036e140(param_1 + 0xa58,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x9dc) = DAT_003702c4;
  return;
}
