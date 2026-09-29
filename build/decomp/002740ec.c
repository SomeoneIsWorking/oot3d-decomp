// OoT3D decomp @ 002740ec  name=FUN_002740ec  size=360

void FUN_002740ec(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;

  uVar3 = DAT_00274268;
  if (*(int *)(param_1 + 0x9c) < DAT_00274254) {
    iVar6 = *(int *)(DAT_00274258 + param_2);
    *(short *)(param_1 + 0x234) = (short)DAT_0027425c;
    puVar2 = DAT_00274260;
    *(undefined1 *)(param_1 + 0x231) = 0;
    *(undefined4 *)(iVar6 + 0x28) = *puVar2;
    *(undefined4 *)(iVar6 + 0x2c) = DAT_00274264;
    *(undefined4 *)(iVar6 + 0x30) = puVar2[2];
    *(undefined4 *)(iVar6 + 0x221c) = uVar3;
    *(undefined2 *)(iVar6 + 0xbe) = 0x8000;
    *(undefined2 *)(iVar6 + 0x2222) = 0x8000;
    *(undefined2 *)(iVar6 + 0x2220) = 0x8000;
    *(undefined4 *)(iVar6 + 100) = uVar3;
    *(undefined2 *)(iVar6 + 0x2280) = 0;
    *(uint *)(iVar6 + 0x1710) = *(uint *)(iVar6 + 0x1710) | 0x20;
    FUN_00367494(param_2,param_2 + 0x2298);
    FUN_0035af04(iVar6,1);
    FUN_0036e980(param_2,param_1,0x6a);
    uVar5 = FUN_00367d74(param_2);
    iVar4 = DAT_0027426c;
    *(undefined2 *)(DAT_0027426c + 4) = uVar5;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(iVar4 + 4),7);
    uVar8 = FUN_0036df4c(DAT_00274270,iVar6 + 0x28);
    iVar6 = DAT_0027427c - 0xc;
    bVar7 = (*(ushort *)(DAT_00274274 + 0xfa) & 0x80) != 0;
    uVar1 = (uint)*(ushort *)(DAT_00274274 + 0xfa);
    if (bVar7) {
      uVar8 = DAT_00274278;
      uVar1 = DAT_0027427c;
    }
    if (bVar7) {
      *(undefined4 *)(uVar1 + 8) = uVar8;
    }
    FUN_00367b14(param_2,(int)*(short *)(iVar4 + 4),iVar6);
    iVar4 = DAT_00274280;
    *(undefined2 *)(DAT_00274280 + 10) = 0;
    *(undefined1 *)(iVar4 + 8) = 1;
    *(undefined4 *)(iVar4 + 4) = DAT_00274284;
    *(undefined1 *)(iVar4 + 9) = 0;
    *(undefined4 *)(iVar4 + 0x18) = uVar3;
    *(undefined4 *)(iVar4 + 0x1c) = uVar3;
    FUN_003655d0(0,1);
    *(undefined4 *)(param_1 + 0x22c) = DAT_00274288;
  }
  return;
}
