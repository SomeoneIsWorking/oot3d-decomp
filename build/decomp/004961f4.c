// OoT3D decomp @ 004961f4  name=FUN_004961f4  size=460

void FUN_004961f4(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;

  iVar5 = FUN_0036b4ec(param_1 + 0x254);
  uVar4 = DAT_00496420;
  iVar7 = DAT_00496410;
  uVar3 = DAT_0049640c;
  if (iVar5 == 0) {
    if (*(short *)(param_1 + 0x2238) == 1) {
      if ((*(short *)(DAT_00496410 + 0xb2) == 0) && (*(short *)(DAT_00496410 + 0x80) != 9)) {
        uVar6 = FUN_003603c0(param_1 + 0x254,DAT_00496420);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00360190(uVar3,DAT_00496428,uVar6,DAT_00496424,param_1 + 0x254,param_2,uVar4,2);
        *(undefined2 *)(param_1 + 0x2238) = 2;
        FUN_0035e580(param_2,param_1,0x14,0x1e);
      }
      cVar2 = *(char *)(param_1 + 2);
      iVar7 = DAT_0049642c;
    }
    else {
      if (*(short *)(param_1 + 0x2238) != 2) {
        return;
      }
      iVar7 = FUN_0036b1e0(DAT_00496430,param_1 + 0x254);
      if (iVar7 == 0) {
        return;
      }
      cVar2 = *(char *)(param_1 + 2);
      iVar7 = DAT_00496434;
    }
    if (cVar2 != '\x02') {
      FUN_0036aeb4(param_1 + 0x28);
      return;
    }
    FUN_0036f59c(param_1,iVar7 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    return;
  }
  if (*(short *)(param_1 + 0x2238) != 0) {
    FUN_002c0948(param_1,param_2);
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    return;
  }
  if (*(char *)(param_1 + 0x1ac) != 0x22) {
    bVar1 = *(byte *)(*(char *)(param_1 + 0x1ac) + DAT_00496418);
    if ((bVar1 & 1) != 0) {
      *(undefined2 *)(DAT_00496410 + 0xb2) = 0x140;
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
    }
    if ((bVar1 & 2) != 0) {
      FUN_00353998(param_2);
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
    }
    if ((bVar1 & 4) != 0) {
      *(undefined2 *)(iVar7 + 0xb2) = 0x50;
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
    }
    FUN_003404a8(uVar3,param_1 + 0x254,param_2,DAT_0049641c);
    *(undefined2 *)(param_1 + 0x2238) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0xffffffff,3);
}
