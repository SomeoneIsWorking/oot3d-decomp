// OoT3D decomp @ 0033e37c  name=FUN_0033e37c  size=196

void FUN_0033e37c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;

  iVar5 = *(int *)(param_1 + 0x124);
  FUN_00373d40(param_1 + 0x1a4,0xc);
  uVar2 = uRam0033e448;
  uVar6 = uRam0033e444;
  *(undefined4 *)(param_1 + 0x1e4) = uRam0033e440;
  *(undefined4 *)(param_1 + 0x2b0) = uVar6;
  do {
    uVar6 = func_0x00371e50(uVar2);
    uVar7 = VectorFloatToUnsigned(uVar6,3);
  } while ((uint)*(byte *)(param_1 + 0x33a) == (uVar7 & 0xff));
  *(char *)(param_1 + 0x33a) = (char)uVar7;
  puVar4 = (undefined4 *)(iRam0033e44c + (uVar7 & 0xff) * 0xc);
  *(undefined4 *)(param_1 + 0x28) = *puVar4;
  *(undefined4 *)(param_1 + 0x30) = puVar4[2];
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 0x2dc) = 0xf;
  if (iVar5 != 0) {
    bVar1 = *(byte *)(iVar5 + 0xb7);
    if (bVar1 < 0x12) {
      if (bVar1 < 0xc) {
        if (bVar1 < 6) {
          uVar3 = 3;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    *(undefined2 *)(param_1 + 0x2cc) = uVar3;
  }
  return;
}
