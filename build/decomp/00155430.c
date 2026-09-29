// OoT3D decomp @ 00155430  name=FUN_00155430  size=412

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00155430(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;

  iVar5 = *(int *)(param_1 + 0x124);
  FUN_003731e0(param_1 + 0x5c0);
  uVar1 = uRam001555d0;
  uVar3 = uRam001555cc;
  FUN_00373500(uRam001555d0,uRam001555cc,uRam001555cc,param_1 + 0x6c);
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,
               (int)(short)(int)*(float *)(param_1 + 0x520));
  FUN_00370084(param_1 + 0xbc,0,5,(int)(short)(int)*(float *)(param_1 + 0x520));
  FUN_00373500(uRam001555d8,uVar3,uRam001555d4,param_1 + 0x520);
  FUN_00365860(param_1);
  FUN_0036b96c(param_1);
  uVar3 = DAT_0036e5b4;
  iVar6 = iRam001555e0;
  if (*(short *)(param_1 + 0x1d0) == 0) {
    uVar2 = *(uint *)(iVar5 + 0x1a4);
    bVar7 = uVar2 != uRam001555dc;
    if (bVar7) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x1b6);
    }
    if (!bVar7 || uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x7d8) = 1;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined4 *)(param_1 + 0x1a4) = DAT_0036e5b0;
      *(undefined4 *)(param_1 + 0x520) = uVar3;
      FUN_00370350(DAT_0036e5b8,param_1 + 0x5c0,0xb);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(undefined2 *)(param_1 + 0x1b6) = 0;
    uVar3 = uRam001555e4;
    iVar6 = *(int *)(iVar6 + param_2);
    *(uint *)(param_1 + 0x1a4) = uRam001555dc;
    FUN_00374a58(uVar3,param_1 + 0x5c0,0xc);
    uVar3 = FUN_0036ae14(param_1 + 0x5c0,0xc);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1fc) = uVar3;
    *(undefined2 *)(param_1 + 0x1d2) = 0x69;
    uVar3 = *(undefined4 *)(iVar6 + 0x2c);
    uVar4 = *(undefined4 *)(iVar6 + 0x30);
    *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(iVar6 + 0x28);
    *(undefined4 *)(param_1 + 0x50c) = uVar3;
    *(undefined4 *)(param_1 + 0x510) = uVar4;
    iVar6 = iRam001555e8;
    *(undefined4 *)(param_1 + 0x5a0) = uVar1;
    *(undefined4 *)(param_1 + 0x584) = uVar1;
    *(undefined2 *)(param_1 + 0x498) = 0;
    *(undefined2 *)(iVar6 + param_1) = 0xffff;
    *(undefined4 *)(param_1 + 0x550) = uRam001555ec;
    uVar3 = uRam001555f0;
    *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x4e4);
    *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0x4ec);
    *(undefined4 *)(param_1 + 0x52c) = uVar1;
    *(undefined4 *)(param_1 + 0x530) = uVar1;
    *(undefined4 *)(param_1 + 0x538) = uVar3;
    *(undefined4 *)(param_1 + 0x53c) = uVar1;
    *(undefined4 *)(param_1 + 0x544) = uVar1;
    *(undefined4 *)(param_1 + 0x548) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  return;
}
