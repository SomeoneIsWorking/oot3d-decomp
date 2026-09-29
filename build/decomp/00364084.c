// OoT3D decomp @ 00364084  name=FUN_00364084  size=308

void FUN_00364084(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;

  uVar2 = DAT_003641bc;
  puVar1 = DAT_003641b8;
  if (((DAT_003641b8[1] & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003641b8 + 1), puVar3 = DAT_003641c0, iVar4 != 0)) {
    *DAT_003641c0 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003641b8), puVar3 = DAT_003641c4, iVar4 != 0)) {
    *DAT_003641c4 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  local_24 = *(undefined4 *)(param_1 + 0x28);
  local_20 = *(float *)(param_1 + 0x2c) + DAT_003641c8;
  local_1c = *(undefined4 *)(param_1 + 0x30);
  FUN_003642f4(param_2,&local_24,DAT_003641c4 + -3,DAT_003641c4,0x96,0xfffffff6,0xff,0xff,0xff,0xff,
               0,0,0xff,1,0xb,1);
  *(undefined4 *)(param_1 + 0x7d8) = DAT_003641cc;
  return;
}
