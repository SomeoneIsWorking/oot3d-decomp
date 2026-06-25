// OoT3D decomp @ 00334c44  name=FUN_00334c44  size=284

void FUN_00334c44(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined auStack_54 [48];
  undefined auStack_24 [2];
  short local_22;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x2a6) != '\0') {
    uVar1 = (uint)*(byte *)(param_1 + 0x2c9);
    iVar2 = *(int *)(param_1 + 0x2cc) + 0x34;
    FUN_003624c8(iVar2,auStack_24,0);
    local_18 = DAT_00334d64;
    local_1c = DAT_00334d60;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + local_22;
    local_14 = local_1c;
    fVar3 = (float)VectorSignedToFloat((int)local_22,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003625f8(fVar3 * DAT_00334d68,auStack_54,&local_1c);
    FUN_0036c174(iVar2,iVar2,auStack_54);
    *(undefined4 *)(*(int *)(param_1 + 0x2cc) + uVar1 * 0x34 + 0xc) =
         *(undefined4 *)(param_1 + 0x2b8);
    *(undefined4 *)(*(int *)(param_1 + 0x2cc) + uVar1 * 0x34 + 0x2c) =
         *(undefined4 *)(param_1 + 0x2c0);
    if ((*(byte *)(param_1 + 0x2a6) & 8) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2cc) + uVar1 * 0x34 + 0x1c) =
           *(undefined4 *)(param_1 + 700);
    }
    else if ((*(byte *)(param_1 + 0x2a6) & 2) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2cc) + uVar1 * 0x34 + 0x1c) =
           *(undefined4 *)(param_1 + 0x2b0);
    }
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x2b8);
    *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 700);
    *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2c0);
    *(undefined2 *)(param_1 + 0x2a8) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0x2a6) = 0;
  }
  return;
}

