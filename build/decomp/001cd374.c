// OoT3D decomp @ 001cd374  name=FUN_001cd374  size=372

void FUN_001cd374(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;

  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + DAT_001cd4e8;
  FUN_00353804(param_1,0x14);
  if (*(char *)(param_1 + 0x929) != -1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  FUN_0037322c(DAT_001cd4ec,param_1);
  fVar1 = DAT_001cd4fc;
  *(undefined4 *)(param_1 + 0x9b4) = DAT_001cd4f0;
  *(undefined4 *)(param_1 + 0x9b8) = DAT_001cd4f4;
  *(undefined4 *)(param_1 + 0x9bc) = DAT_001cd4f8;
  *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_1 + 0x28);
  *(float *)(param_1 + 0x9c4) = *(float *)(param_1 + 0x2c) - fVar1;
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x986) = 9;
  if (*(short *)(param_1 + 0x1c) == 3 || *(short *)(param_1 + 0x1c) == 2) {
    if ((*(uint *)(DAT_001cd504 + 0xbc) & *(uint *)(DAT_001cd508 + 0x3c)) != 0) {
      *(undefined2 *)(param_1 + 0x116) = 0x5000;
      goto LAB_001cd4b4;
    }
    iVar4 = FUN_0036e864(param_2,10);
    if ((iVar4 == 0) && (iVar4 = FUN_0036e864(param_2,0xb), iVar4 == 0)) {
      uVar3 = (undefined2)DAT_001cd50c;
    }
    else if (((*(short *)(param_1 + 0x1c) == 3) && (iVar4 = FUN_0036e864(param_2,10), iVar4 != 0))
            || ((*(short *)(param_1 + 0x1c) == 2 && (iVar4 = FUN_0036e864(param_2,0xb), iVar4 != 0))
               )) {
      uVar3 = (undefined2)DAT_001cd510;
    }
    else {
      uVar3 = (undefined2)DAT_001cd518;
    }
  }
  else {
    uVar3 = (undefined2)DAT_001cd500;
  }
  *(undefined2 *)(param_1 + 0x116) = uVar3;
LAB_001cd4b4:
  *(undefined2 *)(param_1 + 0x920) = 300;
  *(undefined1 *)(param_1 + 0x91d) = 0x30;
  uVar2 = DAT_001cd514;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 0x918) = uVar2;
  return;
}
