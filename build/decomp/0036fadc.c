// OoT3D decomp @ 0036fadc  name=FUN_0036fadc  size=292

void FUN_0036fadc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;

  uVar4 = FUN_00363c10(param_2 + 0x3a58,DAT_0036fc00);
  iVar5 = FUN_00373074(param_2 + 0x3a58,uVar4);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x888) = DAT_0036fc04;
  }
  else {
    FUN_00370350(DAT_0036fc08,param_1 + 0x228,0xf);
    *(undefined4 *)(param_1 + 0x888) = DAT_0036fc0c;
    uVar4 = DAT_0036fc10;
    if (*(char *)(param_1 + 0xa30) == '\0') {
      *(undefined2 *)(param_1 + 0x89a) = 0x3c;
    }
    else {
      fVar6 = (float)FUN_00371e50();
      fVar2 = DAT_0036fc18;
      fVar1 = DAT_0036fc14;
      if ((short)(int)fVar6 < 1) {
        fVar6 = (float)FUN_00371e50(uVar4);
        fVar6 = (float)VectorSignedToFloat((int)(short)(int)fVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar3 = (undefined2)(int)(fVar6 * fVar1 * fVar2 - fVar2);
      }
      else {
        fVar6 = (float)FUN_00371e50(uVar4);
        fVar6 = (float)VectorSignedToFloat((int)(short)(int)fVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar3 = (undefined2)(int)(fVar2 + fVar6 * fVar1 * fVar2);
      }
      *(undefined2 *)(param_1 + 0x89a) = uVar3;
    }
    uVar4 = DAT_0036fc1c;
    *(undefined1 *)(param_1 + 0xa32) = 1;
    *(undefined4 *)(param_1 + 0x924) = uVar4;
    *(undefined4 *)(param_1 + 0x920) = uVar4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  return;
}
